<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>php</title>
</head>
<body>
<?php
    if($_POST["email"]!=""&& $_POST["password"]!=""&&$_POST["email"]=="g211210054@sakarya.edu.tr"&& $_POST["password"]=="g211210054"){
        echo "Hoşgeldiniz ! <br>";
        echo "Email: ";
        echo $_POST["email"];
        echo "<br>";
        echo "Şifre: ";
        echo $_POST["password"];
    }else{
        header('Location: login.html'); // login başarısızsa login sayfasına geri yönlendirme
        exit;
    }?>
</body>
</html>