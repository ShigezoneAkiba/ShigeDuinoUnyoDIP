<div id="top"></div>

## 使用技術

<p style="display: inline">
  <img src="https://img.shields.io/badge/-Cplusplus-00599C.svg?logo=cplusplus&style=plastic">
  <img src="https://img.shields.io/badge/-Arduino-00979D.svg?logo=arduino&style=plastic">
  <img src="https://img.shields.io/badge/-Github-181717.svg?logo=github&style=plastic">
</p>

## 目次

1. [プロジェクトについて](#プロジェクトについて)
2. [環境](#環境)
3. [ディレクトリ構成](#ディレクトリ構成)
4. [トラブルシューティング](#トラブルシューティング)

## プロジェクトについて

基板付き書籍「自分で作るArduino Uno 互換ボード」（出版社：ラトルズ）掲載プログラム<br>
<br>
プログラムをダウンロードできます。<br>
「<>Codeボタン」→「Download ZIP」を選択してください<br>


<p align="right">(<a href="#top">トップへ</a>)</p>

## 環境

### ArduinoIDEダウンロード

Arduino IDEをダウンロード、インストールしてください。<br>
Arduino IDE(https://www.arduino.cc/en/software)<br>
検証済みver:Arduino IDE 2.2.1<br>


### CH340ドライバインストール

標準搭載PCが増えてきましたが、標準搭載でなかった場合、下記をダウンロード・インストールしてください。<br>
CH340ドライバ(https://www.wch.cn/downloads/CH341SER_ZIP.html)<br>


### ボード設定

ツール→ボード→Arduino AVR Boards→Arduino Uno<br>
を選択してください<br>


### ポート設定

ツール→ポート<br>
で、出てきたポートを選択してください。<br>

<p align="right">(<a href="#top">トップへ</a>)</p>

## ディレクトリ構成

<pre>
.
├── 03_Lchika
│   └── 03_Lchika.ino
├── LICENSE
└── README.md
</pre>

<p align="right">(<a href="#top">トップへ</a>)</p>

## トラブルシューティング

### Compilation error:xxxxxxxxxxx

プログラムに間違いがあります。エラー内容を翻訳して、原因を探してみてください。


### Failed uploading: uploading error: exit status 1

ボード設定が異なっている可能性があります。ArduinoUnoが選択されていることを確認してください。


### Failed uploading: no upload port provided

ポートが正しく選択されていないか、デバイスが接続されていません。ポート番号を確認してください。


<p align="right">(<a href="#top">トップへ</a>)</p>
