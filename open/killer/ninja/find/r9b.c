// open/killer/ninja/find/r9b.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  可恶，你绝对相信杀手的训练，心一横，当成没事的人，在队伍之中待机
  果然，那个人的目标并不是你，强大的剑气宛如波涛一般
  化成夺命的光影，往前方袭去，如此强大的威力，前所未见
  就算是仙剑后三式，也没有如此的威力!!!
  你隐约听到‘仙剑后九式之.....’就被巨大的破坏声干扰了....
  想不到仙剑还有另外的后六式？
  虽然你有满腔的疑惑，但是队伍已到那股强大的力量之处
  果然是先前那一位绿毛的前辈，但是柴荣已经不在他身边。
  ‘太小看我了吧，居然才用仙剑后九式的第五式对我......’
  
  那人沉声道：‘绿毛老鬼，先前杀了敝派数十名弟子的人，是不是你们的人？’
  ‘哼....我如果说不是，你会相信吗？ 你们不是已经集结八大派了？’
  那人：‘你们黑牙连杀人无数，教我们如何相信你？给你机会自尽吧!’
  ‘放屁，多说无益....魔气杀!’老祖话说的到一半，就动手了。
  
 
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "观战" : "浑沌的过去....必须要自己去探索\n",
  "插手" : "浑沌的过去....必须要自己去探索\n",]));
  
  set("exits", ([ /* sizeof() == 1   */
     "插手" : __DIR__"rx20.c",
     "观战" : __DIR__"r10b.c",   ]));
  set("no_transmit",2);
  setup();
}
