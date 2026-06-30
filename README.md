[README.md](https://github.com/user-attachments/files/29513690/README.md)
# C++ Hesap Makinesi Projesi 🚀

Bu proje, temel matematiksel işlemleri hızlı ve güvenilir bir şekilde gerçekleştirmek amacıyla geliştirilmiş bir C++ konsol uygulamasıdır. İlerleyen günlerde tamamlanacak olan 5 projeden oluşan serinin ilk adımıdır.

## 🎯 Projenin Amacı
Projenin temel amacı, zihinden hesaplamakta zorlandığımız büyük sayıların işlemlerini kolaylaştırmak ya da manuel olarak zaman kaybetmek istemediğimiz, daha pratik ve hızlıca çözüme ulaşmak istediğimiz hesaplamaları hesap makinesi üzerinden gerçekleştirmektir.

## 🛠️ Nasıl Çalışır ve Teknik Özellikler

Projenin kod yapısı geliştirilirken belirli veri tipleri ve kontrol yapıları bilinçli olarak tercih edilmiştir:

* **`double` Değişkeni:** Hesap makinesinde çok büyük sayılarla ve ondalıklı değerlerle de işlem yapılabileceği öngörülerek, sayısal sınırları geniş tutmak adına giriş ve sonuç değerlerinde `double` veri tipi kullanılmıştır.
* **`char` Operatör Değişkeni:** Kullanıcının yapacağı işlemi (`+`, `-`, `*`, `/`) seçebilmesi için `operator` değişkenine `char` veri tipi verilmiştir. Sayısal veri tipleri (`int`, `double`, `float`) yalnızca sayıları temsil ettiği, `string` ise metinler için kullanıldığı için, tek bir karakteri saklamanın en doğru yolu olarak `char` tercih edilmiştir.
* **`switch` Kontrol Yapısı:** Projenin ilerleyen kısımlarında, uzun ve karmaşık `if / else if` blokları yerine daha pratik, temiz ve okunabilir bir yapı sunduğu için `switch` yapısı kullanılmıştır.
* **Sıfıra Bölme Hatası Yönetimi (`if-else`):** Bölme işleminde matematiksel olarak özel bir durum mevcuttur; bir sayı sıfıra bölünemez. Gerçek hesap makinelerinde olduğu gibi bu hatanın önüne geçmek ve kullanıcıya "sıfıra bölünmez" uyarısı verebilmek için bölme case'i içerisinde ayrı bir `if-else` yapısı kullanılmıştır. Eğer bölen sayı sıfır değilse sonuç bloğu yazılarak proje başarıyla bitirilir.

## 🧠 Bu Projeden Neler Öğrendim?
Bu projeyi geliştirme süreci teknik anlamda önemli bir mantığı kavramamı sağladı:
* Bölme işlemindeki özel durumu kontrol etmek için kurduğum `if` yapısının içerisinde yer alan **`return` kısmının** mantığını öğrendim. Hata oluştuğunda program akışını nasıl kontrol edeceğimi ve `return` ifadesiyle süreci nasıl yöneteceğimi bu sayede deneyimlemiş oldum.

## 📅 Yol Haritası (Proje Serisi)
* [x] **Proje 1:** Hesap Makinesi (Tamamlandı)
* [ ] **Proje 2:** İlerleyen Günlerde Yapılacak
* [ ] **Proje 3:** İlerleyen Günlerde Yapılacak
* [ ] **Proje 4:** İlerleyen Günlerde Yapılacak
* [ ] **Proje 5:** İlerleyen Günlerde Yapılacak

---
Geliştirici: **Sefa Yusuf Kütük**
