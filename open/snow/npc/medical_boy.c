// 改写自卖火材的小女孩..:)/open/center/npc/vendor.c 
#include "/open/open.h" 
 
// inherit F_VENDOR; 
 
void create() 
{ 
        set_name("采药的少年", ({ "medical boy", "boy" }) ); 
        set("gender", "男性" ); 
        set("age", 18); 
        set("long", @LONG 
这是一名皮肤囿黑的少年，看他那结实的肌肉，不难猜出他平日一定常在山 
中采药。 
LONG); 
        set("attitude", "friendly"); 
        //以下这一行表示称号
        set("rank_info/respect", "小兄弟"); 
        set("combat_exp", 4000); 
        //以下表示这位npc所要卖的东西
        // set("vendor_goods", ({
        //    CENTER_OBJ"torch", 
        //    CENTER_OBJ"torch",                   
        //    CENTER_OBJ"map", 
        //  }) ); 
        //   greeting_msg用于当有人走来这个房间时，npc所要说的话
/*      set("greeting_msg", ({ 
            "采药郎说道: 遭了！师父交代的草药要是不赶紧找到的话，回去一定被骂。\
n", 
            "听说这做山上生长着一种吃了能延年益寿的「神仙草”。\n", 
                             }) ); 
*/
        set("chat_chance" , 5);
        set("chat_msg" , ({
           (: this_object() , "random_move" :),
           "采药郎说道：最近这里有怪物出没，师父还叫我一个人上山采药...\n",
           "采药郎说道：唉！师父交代的草药如果不快找到的话，回去一定又要挨骂。\n
",
           "采药郎说道：听说这山上生长着一种叫做「神仙草”的珍药。\n",
                          }) );
        set("inquiry" , ([
            "药草"    :    "师父要我找的药草其实很简单，不过今天运气比较差，到现
在连一株都没采到。\n",
            "草药"    :    "师父要我找的药草其实很简单，不过今天运气比较差，到现
在连一株都没采到。\n",
            "神仙草"  :    "听说这种药草吃了之后，对练功的人有一定程度的帮助。\n
",
            "师父"    :    "我师父可厉害了，听说他以前是一名御医呢！",
                         ]) );
        setup(); 
        //以下这一行表示这位npc所要携带的东西
        carry_object(CENTER_OBJ"cloth1")->wear(); 
} 
/* 
int accept_object(object who, object ob) 
{ 

object me; 
       me = this_object(); 

    if (ob->value() == 0) 
  int accept_object(object who, object ob) 
  { 
  object me; 
         me = this_object(); 
    if (ob->value() == 0) 
   message_vision
     ("$N说道: $n，非常感谢你，不过我比较希望能快点找到师父要的东西!\n", 
                     me, who); 
    else 
   message_vision
     ("$N说道: 谢谢你，$n，我回去可以跟师父交代了。\n", 
                     me, who); 
    message_vision("少年说道: 我现在还想不起来要怎么谢谢你，将来想到一定报答你
。\n", 
                     me, who); 
 
  return 1; 
}
*/ 
