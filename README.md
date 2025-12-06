# Mini-Tasinabilir-Saglik-Cantasi
Arduino tabanlı taşınabilir mobil sağlık çantasıdır. MLX90614 kızılötesi sıcaklık sensörü ve KY-039 nabız sensörü kullanarak vücut sıcaklığı ve nabzı ölçer. İstenilen yerde sağlık takibi sağlar. Kritik durumlarda LED ve buzzer ile uyarı vererek ilk müdahale imkanı sunar.

## Proje Görselleri
<img width="935" height="351" alt="image" src="https://github.com/user-attachments/assets/2dced661-1e46-4a08-8a27-5269e9169374" />

## Kullanilan Malzemeler 
- Arduino Uno
- MLX90614 kızılötesi sıcaklık sensörü
- KY-039 nabız sensörü
- 16x2 LCD (I2C)
- LED’ler (Kırmızı & Yeşil)
- Buzzer
- Powerbank
- Jumper kablolar

## Kod Açıklaması
Proje kodu, sıcaklık ve nabız değerlerini okuyarak LCD ekranda gösterir.  
Sıcaklık 37°C üzerinde ise **LED ve buzzer** ile uyarı verir.  
Veriler hem seri port hem de ekranda izlenebilir.

## Geliştiriciler
- Berfin Ekin Baysu
- Birsen Kanat
