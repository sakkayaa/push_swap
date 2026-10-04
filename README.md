# 🔄 Push_swap

> **İki stack ve sınırlı komutlarla tam sayı sıralama**  
> C dilinde algoritma tasarımı, veri yapıları ve işlem sayısını azaltma üzerine bir 42 projesi.

## 🚀 Proje hakkında

`push_swap`, verilen benzersiz tam sayıları iki stack (`A` ve `B`) üzerinde, sınırlı bir işlem kümesiyle artan sıraya dizer. Program sıralama sonucunu değil, uygulanması gereken komut dizisini üretir. Ayrı `checker` programı bu komutları çalıştırıp sonucun doğruluğunu denetler.

Proje; C, stack veri yapıları, algoritma tasarımı, girdi doğrulama, maliyet hesaplama ve Makefile ile derleme konularında uygulama deneyimi sunar.

## 🧠 Algoritma yaklaşımı

- Küçük girdiler özel sıralama adımlarıyla ele alınır.
- Daha büyük girdilerde bazı değerler `A` üzerinde tutulurken diğerleri `B` stack’ine aktarılır.
- Değerleri geri taşırken iki stack’in rotasyon maliyetleri hesaplanır; ortak yöndeki rotasyonlar birleştirilerek işlem sayısı azaltılmaya çalışılır.
- Son adımda `A` stack’i en küçük değer en üstte olacak şekilde döndürülür.

## 🕹️ Kullanılan işlemler

| İşlem | Açıklama |
|---|---|
| `sa`, `sb`, `ss` | Stack’in üstündeki elemanları değiştirir |
| `pa`, `pb` | Elemanı bir stack’ten diğerine taşır |
| `ra`, `rb`, `rr` | Stack’i yukarı döndürür |
| `rra`, `rrb`, `rrr` | Stack’i ters yönde döndürür |

## 📂 Proje yapısı

| Yol | Amaç |
|---|---|
| `sources/` | Girdi kontrolü, stack işlemleri ve sıralama algoritmaları |
| `includes/push_swap.h` | Veri yapıları ve fonksiyon bildirimleri |
| `libraries/libft/` | Projede kullanılan yardımcı C fonksiyonları ve modülleri |
| `Makefile` | `push_swap` ve `checker` programlarını derler |
| `lfrasson_tester.sh` | İsteğe bağlı doğruluk ve işlem sayısı testleri |
| `benchmark_vbrazanik.sh` | İsteğe bağlı rastgele girdi performans ölçümü |

## ⚙️ Gereksinimler

- C derleyicisi (`gcc` veya uyumlu)
- `make`
- UNIX benzeri bir ortam (Linux veya macOS)

## 🛠️ Derleme

Proje klasöründe çalıştırın:

```bash
make
```

Derleme `push_swap` ve `checker` çalıştırılabilir dosyalarını oluşturur.

## ▶️ Kullanım

Sıralama komutlarını üretmek için:

```bash
./push_swap 3 2 1 4
```

Tek bir tırnaklı argüman da kullanabilirsiniz:

```bash
./push_swap "3 2 1 4"
```

Checker ile sonucu doğrulayın:

```bash
ARG="3 2 1 4"
./push_swap $ARG | ./checker $ARG
```

Doğru sıralama `OK` çıktısı verir. Üretilen komut sayısını görmek için:

```bash
./push_swap 3 2 1 4 | wc -l
```

Girdi tam sayı olmayan değerler, tekrar eden sayılar veya `int` aralığı dışındaki sayılar içerirse program hata mesajı verir.

## 🧹 Makefile komutları

| Komut | Açıklama |
|---|---|
| `make` | `push_swap` ve `checker` programlarını derler |
| `make clean` | Nesne dosyalarını kaldırır |
| `make fclean` | Nesne dosyalarıyla programları ve libft arşivini kaldırır |
| `make re` | Temiz derleme yapar |
| `make norm` | Norminette kuruluysa ana proje dosyalarını denetler |

## 🌱 Öğrenme çıktıları

- Stack yapısı ve iki stack arasında veri taşıma
- Girdi ayrıştırma, sınır değerleri ve yinelenen değerlerin kontrolü
- Rotasyon maliyeti ve işlem sayısı optimizasyonu
- C’de modüler tasarım, statik kütüphaneler ve Makefile kullanımı
- Checker ve benchmark araçlarıyla doğrulama

## 🔗 Profil

GitHub: [sakkayaa](https://github.com/sakkayaa) · LinkedIn: [Sedef Akkaya](https://www.linkedin.com/in/sedef-akkaya-0a5580228/)

---

*Az komutla sırala. Stack’leri akıllıca kullan. 🔄*
