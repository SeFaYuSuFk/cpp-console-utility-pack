[gemini-code-1782913737376.md](https://github.com/user-attachments/files/29554079/gemini-code-1782913737376.md)
# C++ Projeleri ve Öğrenim Serüveni 🚀

Bu depo, C++ öğrenme sürecimde geliştirdiğim projeleri ve her bir projeden edindiğim tecrübeleri içermektedir. 5 projeden oluşan bir seri olarak planlanmıştır.

---

## 🧮 Proje 1: Hesap Makinesi

**Projenin Amacı:** Zihinden hesaplamakta zorlandığımız büyük sayıların işlemlerini kolaylaştırmak ya da pratik ve hızlıca çözüme ulaşmak istediğimiz hesaplamaları gerçekleştirmektir.

**Nasıl Çalışır ve Teknik Özellikler:**
* **`double` Değişkeni:** Çok büyük sayılarla ve ondalıklı değerlerle de işlem yapılabileceği öngörülerek, giriş ve sonuç değerlerinde kullanılmıştır.
* **`char` Operatör Değişkeni:** Kullanıcının yapacağı işlemi seçebilmesi için (metin yerine tek bir karakter saklandığı için) tercih edilmiştir.
* **`switch` Kontrol Yapısı:** Uzun `if / else if` blokları yerine daha pratik ve temiz bir yapı sunduğu için kullanılmıştır.
* **Sıfıra Bölme Hatası Yönetimi (`if-else`):** Bölme işleminde bir sayının sıfıra bölünemeyeceği kuralı için ayrı bir kontrol yapısı kurulmuştur.

**Bu Projeden Neler Öğrendim?**
* Bölme işlemindeki özel durumu kontrol etmek için kurduğum `if` yapısının içerisinde yer alan **`return`** kısmının mantığını öğrendim. Hata oluştuğunda program akışını nasıl yöneteceğimi deneyimledim.

---

## 🔄 Proje 2: Tek mi Çift mi Bulucu

**Projenin Amacı:** Kullanıcının girdiği bir sayının tek mi yoksa çift mi olduğunu anında bulmak. Bu projede standart bir yapının ötesine geçerek, konsolun tek bir işlemden sonra hemen kapanmasını engellemek ve kullanıcının istediği kadar sayı sorgulayabilmesini sağlamak hedeflenmiştir.

**Nasıl Çalışır ve Teknik Özellikler:**
* **`do-while` Döngüsü:** Kullanıcının sürekli olarak sayı girebilmesi ve programın her işlem sonrası kapanmaması için kullanılmıştır. Bu yapı sayesinde kontrol süreci kesintisiz hale getirilmiştir.
* **Mod Alma (`%`):** Sayıların 2'ye tam bölünüp bölünmediğini kontrol ederek sayının tekliğini veya çiftliğini belirleme mantığı üzerine kurulmuştur.

**Bu Projeden Neler Öğrendim?**
* **Deneme-Yanılma ile Çözüm:** Bu projeyi büyük oranda kendi başıma, bolca deneme yanılma yaparak geliştirdim. Pes etmeyip mantığı kendi kendime kurmayı başardım.
* **Operatör Karışıklığı (Eğlenceli Bir Hata):** İlk başta mod operatörü (`%`) yerine, şekil benzerliğinden dolayı yanlışlıkla mantıksal ve (`& &`) bağlacını kullanmıştım. Bu hatayı sonradan fark edip düzeltmek, operatörlerin doğru kullanımına karşı daha dikkatli olmamı sağladı.
* **Döngü Sözdizimi (Syntax) Keşfi:** Başlangıçta `while` şartını en üstte, `do` komutundan hemen sonra yazmıştım. Ancak hatamı fark ederek `while`'ın en aşağıda, süslü parantezin `}` dışında olması gerektiğini yaşayarak ve yanlışımı düzelterek öğrendim.

---

## 📅 Yol Haritası (Proje Serisi)
* [x] **Proje 1:** Hesap Makinesi (Tamamlandı)
* [x] **Proje 2:** Tek mi Çift mi Bulucu (Tamamlandı)
* [ ] **Proje 3:** İlerleyen Günlerde Yapılacak
* [ ] **Proje 4:** İlerleyen Günlerde Yapılacak
* [ ] **Proje 5:** İlerleyen Günlerde Yapılacak

---
Geliştirici: **Sefa Yusuf Kütük**
