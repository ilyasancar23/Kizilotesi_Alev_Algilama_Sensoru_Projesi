# Kizilotesi_Alev_Algilama_Sensoru_Projesi
Beş yönlü alev sensörleri, çevresindeki herhangi bir alev kaynağını tespit etmek için beş farklı algılama elemanı kullanır. Bu sensörler, yangın algılama sistemleri gibi birçok uygulamada kullanılmaktadır. İşte beş yönlü alev sensörü çalışma prensibi:

Beş yönlü alev sensörü, çevresindeki ışık seviyesini ölçmek için beş farklı algılama elemanı kullanır. Algılama elemanları, fotodiyot veya fototransistör gibi ışık duyarlı yarı iletkenlerdir. Algılama elemanları, kızılötesi veya ultraviyole ışınlar gibi farklı ışık dalga boylarını ölçebilir.

Sensörlerin çevresindeki ışık seviyesi ölçüldükten sonra, bu değerler mikrokontrolcüye aktarılır. Mikrokontrolcü, ölçülen ışık seviyesini sürekli olarak izler ve eğer ışık seviyesi beklenenden yüksekse, alev algılanmış olarak kabul edilir.

Sensörlerin hassasiyet ayarı, genellikle potansiyometreler aracılığıyla yapılır. Potansiyometreler, sensörün hassasiyetini ayarlamak için kullanılan değişken dirençlerdir. Hassasiyet ayarı, sensörün algılama aralığını artırır veya azaltır. Bu sayede, sensörün yanlış alarm vermesi veya alevi algılayamaması riski azaltılır.

Sonuç olarak, beş yönlü alev sensörü, çevresindeki ışık seviyesini ölçerek alev algılama işlemini gerçekleştirir. Algılanan alev, mikrokontrolcüye gönderilir ve istenilen tepkiyi vermeye yönelik programlanabilir.
Beş yönlü alev sensörü ve bir buzzer kullanarak bir yangın algılama sistemi oluşturmak için gereken Arduino proje bağlantı ve kodları:

Bağlantı Şeması:


Buzzer VCC -> D8 Arduino pini
Buzzer GND -> GND Arduino pini
Bu kodda, beş yönlü alev sensörleri Arduino kartına bağlanır ve bir buzzer kullanarak alarm verilir. Sensörlerin çıkışları, Arduino analog girişleri A2, A3, A4, A5 ve A6 ile okunur. Bu sensörlerden herhangi biri belirlenen eşik değerinin üzerinde bir değer okursa, buzzer aktif hale gelir ve alarm verir.

Buzzer, digitalWrite() fonksiyonu kullanılarak HIGH (yüksek) değere ayarlanır, ardından delay() fonksiyonu kullanılarak 1 saniye boyunca bekletilir ve tekrar LOW (düşük) değere ayarlanarak devre dışı bırakılır.

Ayrıca, Serial.begin() fonksiyonu kullanılarak seri monitöre bir mesaj yazdırılır ve sensör verileri takip edilebilir.
