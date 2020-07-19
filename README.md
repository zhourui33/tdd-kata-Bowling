# tdd-kata-Bowling

## 需求背景

请你设计一个计算保龄球比赛一局总得分的程序，保龄球的计分规则如下：

1. 每一局总共有十轮，每轮一开始会有十支球瓶，球手可以扔两次球，目标就是用尽量少的球把全部球瓶击倒。
2. 如果第一球就把全部的球瓶都击倒了，也就是STRIKE，画面出现“X”，就算完成一轮了，所得分数是10分再加后面两球的倒瓶数。
3. 如果第一球没有全倒，就要再打一球，如果第二球将剩下的球瓶全都击倒，也就是SPARE，画面出现“/”，也算完成一格，所得分数为10分再加下一轮第一球的倒瓶数。
4. 如果第二球也没有把球瓶全部击倒的话，那分数就是第一球加第二球倒的瓶数，没有奖励（bonus），再接着打下一轮。依此类推。
5. 第十轮有机会扔三次球。如果在第十轮出现STRIKE或者SPARE，则球手可再加打第三球。
全部十轮的得分相加就等于这一局的总得分。

![avatar](/bowling_example.png)

## 需求分析

* 每一轮都打出0分，得分为0分。
* 每轮都没有全部命中，得分为所有击中瓶子数的总和。
* 有一轮打出STRIKE, 得分为所有集中瓶子数总和加STRIKE后两轮的击中瓶子数。
* 有一轮打出SPARE, 得分为所有击中瓶子数总和加SPARE后一轮击中瓶子数。
* 每一轮都打出全中，得分为300分。
