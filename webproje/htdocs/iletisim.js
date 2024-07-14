document
.getElementById("contactForm")
.addEventListener("submit", function (event) {
  event.preventDefault(); // Sayfanın yeniden yüklenmesini engellemek için formun varsayılan davranışını durdurur

  // Form alanlarındaki değerleri alın
  var name = document.getElementById("name").value;
  var email = document.getElementById("email").value;
  var message = document.getElementById("message").value;

  // Doğrulama
  var isValid = true;
  var nameError = document.getElementById("nameError");
  var emailError = document.getElementById("emailError");
  var messageError = document.getElementById("messageError");

  // Ad alanı doğrulama
// Ad alanı doğrulama
if (name === "") {
    nameError.textContent = "Adınızı girin.";
    isValid = false;
  } else if (!/^[a-zA-Z]+$/.test(name)) {
    nameError.textContent = "Adınız sadece harflerden oluşmalıdır.";
    isValid = false;
  } else {
    nameError.textContent = "";
  }
  

  // E-posta alanı doğrulama
  if (email === "") {
    emailError.textContent = "E-posta adresinizi girin.";
    isValid = false;
  } else {
    emailError.textContent = "";
  }

  // Mesaj alanı doğrulama
  if (message === "") {
    messageError.textContent = "Mesajınızı girin.";
    isValid = false;
  } else {
    messageError.textContent = "";
  }

  // Formu gönderme veya hata mesajını görüntüleme
  if (isValid) {
    // Formu sunucuya gönderme işlemleri burada gerçekleştirilebilir
    alert("Form başarıyla gönderildi!");
    document.getElementById("contactForm").reset(); // Formu sıfırla
  } else {
    alert("Lütfen formdaki hataları düzeltin.");
  }



});

resetButton.addEventListener('click', function() {
  form.reset();
});