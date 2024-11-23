[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Arduino-Pro-Micro-based-Traffic-Light-Mini?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Personal%20Experiment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Arduino-Pro-Micro-based-Traffic-Light-Mini
Lampu lalu lintas adalah lampu yang mengendalikan arus lalu lintas. Proyek ini dibuat pada dasarnya untuk menunjukkan cara kerja dari sistem lampu lalu lintas. Merah sebagai penanda bahwa pengendara harus berhenti, kuning sebagai penanda bahwa pengendara harus bersiap, dan hijau sebagai penanda bahwa pengendara diperbolehkan berjalan. Proyek ini telah dilaksanakan dan memakan waktu kurang lebih 1 hari. Manfaat dari pembuatan proyek ini tidak lain adalah untuk menambah wawasan. Hasil dari penelitian ini menunjukkan bahwa prototipe lampu lalu lintas dapat berfungsi dengan baik.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | Arduino Pro Micro Leonardo ATMEGA32U4 |
| Editor Kode | Arduino IDE |
| Driver | CH340 USB Driver |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | • Arduino (bawaan)<br>• TM1637Display |
| Aktuator | Modul Lampu Lalu Lintas (x1) |
| Layar | TM1637: Modul 4 Digit 7 Bagian (x1) |
| Komponen Lainnya | • Kabel USB Mikro - USB tipe A (x1)<br>• Kabel jumper (1 set)<br>• Breadboard (x1)<br>• Adaptor DC 5V (x1) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>

2. CH340 USB Driver

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_USB_Driver
   ```

   </td></tr></table>
   
<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img width="840" src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek dengan cara klik ``` File ``` -> ``` Open ``` :

   <table><tr><td width="810">
   
      ``` Traffic_Light.ino ```

   </td></tr></table><br>
   
2. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th width="810">

      Cara mengatur board ``` Arduino Pro Micro ```
            
      </th></tr>
      <tr><td>
         
      Klik ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Micro ```

      </td></tr>
   </table><br>
   
3. ``` Ubah Kecepatan Papan ``` di Arduino IDE

   <table><tr><td width="810">
         
      Klik ``` Tools ``` -> ``` Upload Speed ``` -> ``` 9600 ```

   </td></tr></table><br>
   
4. ``` Instal Pustaka ``` di Arduino IDE

   <table><tr><td width="810">
     
      Unduh semua file zip pustaka. Lalu tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```

   </td></tr></table><br>

5. ``` Pengaturan Port ``` di Arduino IDE

   <table><tr><td width="810">

      Klik ``` Port ``` -> pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```
         
   </td></tr></table><br>

6. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

7. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

8. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>

2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
   
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>
    
5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<table>
<tr>
<th width="840" colspan="3">Tampilan Lampu Lalu Lintas Mini</th>
</tr>
<tr>
<td width="280"><img src="Assets/Documentation/Experiment/View-1.jpg" alt="red_condition"></td>
<td width="280"><img src="Assets/Documentation/Experiment/View-2.jpg" alt="yellow_condition"></td>
<td width="280"><img src="Assets/Documentation/Experiment/View-3.jpg" alt="green_condition"></td>
</tr>
</table>

<br><br>

## Apresiasi
Jika karya ini bermanfaat bagi anda, maka dukunglah karya ini sebagai bentuk apresiasi kepada penulis dengan mengklik tombol ``` ⭐Bintang ``` di bagian atas repositori.

<br><br>

## Penafian
Aplikasi ini merupakan hasil karya saya sendiri dan bukan merupakan hasil plagiat dari penelitian atau karya orang lain, kecuali yang berkaitan dengan layanan pihak ketiga yang meliputi: pustaka, kerangka kerja, dan lain sebagainya.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
