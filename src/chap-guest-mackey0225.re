= モデリングを育てる前の種蒔きと土作り

//flushright{
浅野正貴@mackey0225
//}


今回『チームでモデリングを育てるうえで考えたこと・気づいたこと』というタイトルで登壇・発表させていただきます。
皆様、何卒よろしくお願いいたします。


== これはなんの記事？

発表内容の前日譚として、きっかけや前提となる私たちのチームでの取り組みを紹介する補足記事になります。
喩えるならば、@<b>{モデリングを育てる前の準備として必要となる「種蒔き」と「土作り」}について書いています。

//warning{

なので、オブジェクト指向はこの記事でも一切出てきません！ご容赦ください！！

//}

今回、この記事で紹介する取り組みは、以下の 2 つです。

 * 種蒔き : 輪読会
 * 土作り : ADR(Architecture Decision Records)

それぞれについて、説明します。

== 種蒔き : 輪読会

私たちの開発組織では、有志のメンバーで輪読会を行っています。

運用や進め方は一般的な輪読会と変わらないと思います。
テーマや読みたい書籍をメンバー間で出し合い、メンバーを募り、グループを作ります。
各グループ内で、週次で各回の決められた範囲を事前に読んでおき、感想や疑問点、自分たちのプロダクトへどう活かすかといった議論をします。

過去には、以下のような書籍を読んでいきました。

 * Clean Architecture 達人に学ぶソフトウェアの構造と設計
 * SCRUM BOOT CAMP THE BOOK
 * 良いコード／悪いコードで学ぶ設計入門 ― 保守しやすい成長し続けるコードの書き方
 * 現場で役立つシステム設計の原則　　　　などなど

その中でも、今回、モデリングを考えるきっかけとなったのが、以下の 2 冊です。

 * ドメイン駆動設計 モデリング/実装ガイド
 * ドメイン駆動設計 サンプルコード&FAQ

この 2 冊を読み終わった後に、メンバー間で日々の業務でどう活かすかを議論しました。
その中で上がった課題で、「ユビキタス言語の整備やモデリングの運用がうまくできていない」というものがありました。
これが、今回の登壇のきっかけになります。

輪読会という取り組みを通じて、現在抱えている課題を照らすことができただけでなく、課題に対しての温度感を共有することができました。
ここも喩えるならば、まだ芽が出ていない種の存在を再認識し、まずは種を蒔こうというムードにできました。

== 土作り : ADR(Architecture Decision Records)

前節に述べた通り、この時点では種を蒔くことは決まったが、どこに、どの様に蒔くのかはまだ決まっていませんでした。

無策に種を蒔けばいいものではありません。
砂漠やアスファルトの上に蒔いてしまうと、発芽どころか、そのまま腐ってしまう可能性があります。
そのために、まずおこなったのが、この節で説明する ADR を用いた土作りをしました。

一般的に ADR はシステムやプロダクトにおけるアーキテクチャー上の設計判断を記録するために用いられますが、
私たちはアーキテクチャーのみに限定せず、プロダクト開発における意思決定が伴うものに対して記録するようにしています。

その理由や背景はいくつかあります。例えば、以下のようなことに対応していくためです。

 * 意思決定の記録を形式化することで How だけでなく Why も記録するようになる
 * 意思決定者が何かしらの理由でいなくなったとしても判断ができるようになる
 * 決定時から時間が経つと環境や情勢の変化があり、その決定が時代にフィットしているか振り返るができるようになる

今回、「ユビキタス言語の整備やモデリングの運用がうまくできていない」という課題に対して、
この ADR を用いて、何で管理するのか、どんなものを準備すべきか、どんなタイミングで更新するのかを決定していきました。
（決定事項の内容については、当日の発表でお話できればと思っております。）

このチームで決めていった定義（つまり、土壌）の上で、チームで育てていっています。

== さいごに

一人でサービスを開発・保守するのであれば、自分の裁量ですすめられますが、
現実問題、そのようなことは稀で、基本的には複数人で開発・保守することが一般的です。

複数人で継続的に運用されるものを考えるためには、目線合わせは必要です。
私たちは、本記事で紹介した取り組みや当日の登壇でお話する内容を常に考え続ける必要があると思います。

また、本記事や当日の発表に関しては所属組織である BABY JOB 株式会社のメンバーの協力があってこそになります。
内容に関する様々な助言などに対し、改めてここに感謝の意を表します。

　

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/contributors/mackey0225.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        浅野正貴　@mackey0225 https://x.com/mackey0225\\
		BABY JOB 株式会社 Java エンジニア
    \end{minipage}
    \hspace{1ex}
//}
大阪からの遠征組なので、一人でも多く知り合いを作って帰りたいです！
