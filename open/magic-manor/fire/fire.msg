string *gold_msg = ({

"红色的灵光不时的盘旋环绕在这里，并隐隐透出一股奇异的强大
力量，令人无法逼视灵光的本体为何。
",

"漫天的火焰狂旋飞舞，似要摧毁所有生命一般的嘶吼咆啸，无情
的吞噬着所有的事物。
",

"隐居在火灵塔内的妖物们，不知带何有诡异的能力，带着惊异的
嘶吼声，一见到陌生的人闯了进来，就开始狂叫和发了乱性的攻击着
闯进来的人。
",

"塔内有如一个活体机关，任你如何的走，却是一直找不到往上的
路，只能在塔内寻寻觅觅。
",

});

string printf_msg()
{
return gold_msg[random(sizeof(gold_msg))];
}
