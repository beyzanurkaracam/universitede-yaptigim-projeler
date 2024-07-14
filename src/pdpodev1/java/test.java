/**
*
* @author Beyzanur KARAÇAM beyzanur.karacam@ogr.sakarya.edu.tr
* @since 31.03.2024
* <p>
* 
* </p>
*/


package pdpodev1.java;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;





public class test {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        Scanner scanner = new Scanner(System.in);

        System.out.print("GitHub Repository URL: ");
        String repoUrl = scanner.nextLine();
       
        
        try {
            
         
           
            Process process = Runtime.getRuntime().exec("git clone " + repoUrl);
            process.waitFor();
            
            
        } catch (Exception e) {
        	 System.err.println("Hata: " + e.getMessage());
        }
        String localPath = getLocalPath(repoUrl);
        File folder = new File(localPath);
    
        findJavaFiles(folder);
        
    }
    
public static void findJavaFiles(File folder) throws FileNotFoundException, IOException {
	 String regexDeseni = ".*\\.java$";

     Pattern pattern = Pattern.compile(regexDeseni);

   
     File[] dosyalar = folder.listFiles();
    
     
     if (dosyalar != null) {
         for (File dosya : dosyalar) {
        	 
         	if (dosya.isDirectory()) {
         		findJavaFiles(dosya); 
             } 
         	else { 
         		 Matcher matcher = pattern.matcher(dosya.getName());
             if (matcher.matches()) {
            	 try (BufferedReader br = new BufferedReader(new FileReader(dosya))){
            		 String satir;
            		 String sinifIsmi = "";
            		 int javadocSayisi=0;
            		 while ((satir = br.readLine()) != null) {
                     	
                     	
                         if (satir.contains("class")) {
                             
                             Pattern p = Pattern.compile("class\\s+(\\w+)");
                             Matcher m = p.matcher(satir);
                             if (m.find()) {
                             	sinifIsmi = m.group(1);
                             	 
                             	
                             }
                             System.out.println("Sınıf: " + sinifIsmi);
                             analyzeClass(dosya);
                             
                             
                            
                              }
                        
                            
                         }
                         
            	 }
         		
             }
         	}
         }

         }
     }
           
  private static void analyzeClass(File dosya) throws IOException {
	  
	  int javadocSayisi=0;
	  int yorumSatirSayisi=0;
	  int kodSatirSayisi=0;
	  int fonkSayisi=0;
	  int lineOfCode=0;
	
	  int YH;
	  int yorumSapma;
	  try (BufferedReader br2 = new BufferedReader(new FileReader(dosya))){
 		 String satir;
 		boolean javadocIcinde = false;
 		boolean yorumSatir = false;
 		boolean tekliSatir=false;
 		 while ((satir = br2.readLine()) != null) {
 			lineOfCode++;
 			
 			satir = satir.trim();
 			if (satir.contains("(") && satir.contains(")") && !satir.contains("=") && !satir.contains(";")) {
            	Pattern p = Pattern.compile("\\s+(\\w+)\\(");
                Matcher m = p.matcher(satir);
                if (m.find()) {
                	fonkSayisi++;
                }
                }
 			if(!satir.trim().isEmpty()&& !satir.contains("/**")&&!satir.startsWith("//")&&!satir.trim().contains("*")&&!satir.trim().endsWith("//")&&!satir.trim().contains("*/")&&!satir.trim().endsWith("*/")&&yorumSatir==false) {
 				
 				kodSatirSayisi++;
 				}
 			if (satir.trim().contains("/**")) {
 				
                while(satir != null && !satir.contains("*/")) {
                	if(satir.trim().startsWith("*")) {
                    
                    javadocSayisi++;
                	}
                	satir = br2.readLine();
                
                	lineOfCode++;
                }
                
            }
 			else if (satir.trim().startsWith("/*")) {
 				yorumSatir = true;
 				
                
              
                if (!satir.trim().endsWith("/*")) {
                	yorumSatir = false;
                   
                }
                else if (yorumSatir) {
     	            
                	yorumSatirSayisi++;
                } 
                 
                
            } 
 			else if (satir.contains("*/")) {
           	yorumSatir = false;
                
            } 
 			
 			else if (satir.contains("//") && yorumSatir == false ) {
 				
            	yorumSatirSayisi++;
            } 
 			

        }
 		 
       
    }
	  double yg =  ((javadocSayisi+yorumSatirSayisi)*0.8)/fonkSayisi;
	  double yh=  (kodSatirSayisi*0.3)/fonkSayisi;
	  double yorumYapmaYuzdesi=((100*yg)/yh)-100;
	  System.out.println("Javadoc Satır Sayısı: "+javadocSayisi);
	  System.out.println("Yorum Satır Sayısı: "+yorumSatirSayisi);
	  System.out.println("Kod Satır Sayısı: "+kodSatirSayisi);
	  System.out.println("LOC: "+lineOfCode);
	  System.out.println("Fonksiyon Sayısı: "+fonkSayisi);
	  System.out.println("Yorum Yapma Yüzdesi: "+yorumYapmaYuzdesi);
      System.out.println("---------------------------------------");
	  }
	  


public static void findClassFiles(File folder) {
	
  }
    public static String getLocalPath(String url) {
        int lastSlashIndex = url.lastIndexOf('/');
        String repositoryWithExtension = url.substring(lastSlashIndex + 1);
        if (repositoryWithExtension.endsWith(".git")) {
            return repositoryWithExtension.substring(0, repositoryWithExtension.length() - 4);
        }
        return repositoryWithExtension;
    }



}
