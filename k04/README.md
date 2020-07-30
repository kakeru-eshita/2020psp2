# 課題4 レポート

bb35319010 江下　翔

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明
5.20.ID, gender, height のNUM_ID個分 (14人分) のセットの作成

26.ファイルが空の場合エラーを出して終了

35.ファイルが空の場合エラーを出して終了

40-49.構造体に中身を格納していく

51-58.ファイルが終了次第エラーを出してファイルを閉じる

61.IDを聞く

65.入力した学籍番号と一致した場合表示する

68.genderの欄が１であったらMale、違ったらFemaleと表示する

75.jを１試行ごとに１ずつ足していく

78.データがなく試行が行われない場合はデータがないとみなし「No data」と表示する
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

例えば，ID 45313124のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```

## 修正履歴

