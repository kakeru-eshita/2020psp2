# 課題4 レポート

bb3531910 江下　翔

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明
5.20.ID, gender, height のNUM_ID個分 (14人分) のセットの作成

26.ファイルが空の場合エラーを出して終了

35.ファイルが空の場合エラーを出して終了

40.heights.csvの一行目を読みだす

41-51.構造体に中身を格納していく

53-60.ファイルが終了次第エラーを出してファイルを閉じる

62.IDを聞く

66.入力した学籍番号と一致した場合表示する

68.genderの欄が１であったらMale、違ったらFemaleと表示する

76.jを１試行ごとに１ずつ足していく

78.探しているデータが見つからないときは「Not found data」と表示する

## 入出力結果

例えば，ID 45313125のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313125
---
ID : 45313125
gender : Female
height : 152.4
```

PS C:\Users\bb35319010\Desktop\2020psp2\k04> ./k04
input the filename of sample height :c:\Users\bb35319010\Desktop\2020psp2\sample\heights.csv
input the filename of sample ID :c:\Users\bb35319010\Desktop\2020psp2\sample\IDs.csv
Which ID's data do you want?:45313002
ID : 45313002
gender : Male
height : 183.9


例えば，ID 45313124のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```

PS C:\Users\bb35319010\Desktop\2020psp2\k04> ./k04
input the filename of sample height :c:\Users\bb35319010\Desktop\2020psp2\sample\heights.csv
input the filename of sample ID :c:\Users\bb35319010\Desktop\2020psp2\sample\IDs.csv
Which ID's data do you want?:1
Not found data

## 修正履歴
[comment #20200722]
- とりあえず, l.6-10 の最後に `;` が必要です. 


[comment #20200731]
- l.11 `{` のあとに `;` が必要です.
- l.14 `{` のあとに 全角スペースが入っています. 消してください. 
- l.62 `sscanf` ではなく `scanf` です. 
- 以上の項目を修正するとコンパイルエラーは無くなりますが, まだ結果は正しくありません. 考えましょう.  
以下の項目は結果には直接関わらない修正点ですが, 修正してください. 
- fp==NULL のときのエラーメッセージですが `No data` は相応しくないと思います. 
- ID_NUM に 14 という数字を入れているので for文のところでも ID_NUM を使いましょう. 
