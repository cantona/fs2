//written by AceLan..../u/a/acelan/npc/fall.c
//Rewrite By AceLan fall.c 98.7.16...加强他的武功多变性...
//Motify by AceLan 98/11/1 增加弓箭的制造

#include "/open/open.h"
#include <ansi.h>

inherit F_VENDOR;

string make_weapon();
int init_weapon();
int about_weapon();
int in_combat();
int scholar_finger();
object reload_weapon( object);

void create()
{
   object ob;
   
   set_name("楚胜秋",({"zhu fall", "zhu", "fall"}));
   set("long", @LONG
迷样之武林高手, 以(制作武器)闻名江湖。据说他曾以(儒门)失传
已久之绝招与人对决战, 大败其对手。
LONG);
   set("nickname", "鬼斧神工");
   set("race","人类");
   set("gender","男性");
   set("combat_exp",500000);
   set("attitude","friendly");
   set("age",50);
   set("force_factor", 10);

   set("max_gin", 2000);
   set("eff_gin", 2000);
   set("gin", 2000);
   set("max_kee", 2000);
   set("eff_kee", 2000);
   set("kee", 2000);
   set("max_sen", 2000);
   set("eff_sen", 2000);
   set("sen", 2000);
   set("max_force", 2000);
   set("force", 2000);
   set("max_atman", 2000);
   set("atman", 2000);
   set("max_mana", 2000);
   set("mana", 2000);

   set("str", 30);
   set("cor", 30);
   set("per", 30);
   set("int", 30);
   set("cps", 30);
   set("con", 30);
   set("spi", 30);
   set("kar", 30);
   set("family/family_master", "小蛋蛋");
   set("family/family_name", "儒门");

   set_skill("force", 100);
   set_skill("dodge", 100);
   set_skill("move", 100);
   set_skill("parry", 100);
   set_skill("magic", 100);
   set_skill("unarmed", 100);
   set_skill("stabber", 100);
   set_skill("sword", 100);
   set_skill("blade", 100);
   set_skill("dagger", 100);
   set_skill("plan", 100);

   //儒门
   set_skill("literate", 100);                  //身为儒门, 不会读书怎行...
   set_skill("knowpen", 100);
   set_skill("poetforce", 100);
   set_skill("winter-steps", 100);
   set_skill("god-plan", 100);
   //仙剑
   set_skill("shasword", 100);
   set_skill("shaforce", 100);
   set_skill("sha-steps", 100);
   //京城
   set_skill("dragon-dagger", 100);
   set_skill("oneforce", 100);
   set_skill("chen-steps", 100);
   //金刀
   set_skill("fast-blade", 100);
   set_skill("gold-blade", 100);
   set_skill("fly-steps", 100);
   set_skill("sixforce", 100);
   //段家
   set_skill("six-fingers", 100);
   set_skill("sunforce", 100);
   set_skill("linpo-steps", 100);
   //恶人
   set_skill("badstrike", 100);
   set_skill("badforce", 100);
   set_skill("ghost-steps", 100);
   //雪苍
   set_skill("snow-martial", 100);
   set_skill("snowforce", 100);
   set_skill("black-steps", 100);
   //陇山
   set("functions/kang_kee/level", 50);

   set_skill("lungshan", 100);
   set_skill("haoforce", 100);
   set_skill("henma-steps", 100);
   //道家
   set_skill("necromancy", 100);
   set_skill("gwhip", 100);
   set_skill("gforce", 100);
   set_skill("g-steps", 100);


   //因为是儒门的 所以先设成儒门武功...
   map_skill("force", "poetforce");
   map_skill("parry", "knowpen");
   map_skill("dodge", "winter-steps");
   map_skill("move", "winter-steps");
   map_skill("stabber", "knowpen");
   map_skill("plan", "god-plan");

   set("vendor_goods", ({
       GS_OBJ"woodsword",
       GS_OBJ"sword",
       GS_OBJ"woodblade",
       "/obj/example/dagger",
       "/open/gblade/obj/blade",
       "/open/ping/obj/fan-2",
       "/open/poison/obj/longwhip",
       "/open/gblade/obj/pen",
   }) );

   set("inquiry", ([
       "得意绝招"    :    @LONG
老师傅的得意绝招就是「儒门幻指”ㄚ, 当年成立(五儒生)之时
, 老师傅曾教了我一两手。
LONG,
       "五儒生"      :    @LONG
当年老师傅因自己是武林四大高手之一, 因此想藉此来壮大儒门
, 特将我与其他四位师兄弟组成了五儒生, 各练就一身不同的武功。
LONG,
       "儒门"        :    @LONG
唉...为何总要我旧话重提呢...想当年老师傅待我不薄, 没想到
老师傅竟会遭到不测, 致使他的(得意绝招)因此而失传了, 我为了追
查杀死老师傅的凶手, 已经在此隐姓埋名了好几年了, 无奈却连一点
头序也没有...
LONG,
       "制作武器"    :    (: make_weapon :),
       "材料"        :    @LONG
上佳的材料, 首推江湖上极为难得的(宇内五禽), 制造武器的材
料只需要五禽身体的任何一部份, 再加上一(特殊的矿石)就可以了。
LONG,
       "特殊的矿石"  :    "所谓特殊的矿石就是指(宇内五珍)嘛。",
       "数目"        :    @LONG
明人不说暗话, 我也老了, 打算洗手不干了, 若是你能付我黄金
百两以上, 我就替你打造一把锋利无批, 独一无二的武器。
LONG,
       "宇内五禽"    :    @LONG
‘宇内五禽’所指的就是五种珍禽异兽, 包括住在魔界中的四神
兽龙、凤、龟、麒麟等四种, 另外还加上一只行动如风、居无定所极
为难得一见的天山神鹰。
LONG,
       "宇内五珍"    :    @LONG
‘宇内五珍’指的就是东海冰晶, 七彩玉石, 百炼丹金, 万年寒
冰, 及魔翡翠等五样。
LONG,
   ]));

   set("chat_chance",20);
   set("chat_msg",({
      (: about_weapon :)
   }));
   set("chat_chance_combat",20);
   set("chat_msg_combat",({
      (: in_combat :)
   }));
   setup();

}

void init()
{
   add_action("do_select", "select");
   add_action("do_set_name", "set_name");
   add_action("do_vendor_list", "list");
}

int in_combat()
{
   object weapon, fall= this_object();
// 跟人家打架没拿武器怎行...
   if( !present("m_weapon", this_object()))
   {
      init_weapon();
      weapon= new("/obj/m_weapon.c");            //不加 wield...

// 真是麻烦...武器抓不到 NPC 的设定....
      reload_weapon( weapon);

      weapon->move( fall);
      command("wield m_weapon");                          //这边再 wield...
   }

   //仙剑
   (: perform_action,"sword.sha_kee" :);
   //金刀...
   (: perform_action,"blade.gold-dest" :);
   (: perform_action,"blade.fast-dest" :);
   //恶人...
   (: perform_action,"unarmed.evil-blade" :);
   //段家...
   (: perform_action,"stabber.handwriting" :);
   //儒门...
   (: perform_action,"stabber.movedown" :);
   (: perform_action,"plan.lock-link" :);
   (: perform_action,"plan.ghost" :);
   (: perform_action,"plan.fire" :);
   (: perform_action,"plan.fish" :);
   scholar_finger();                                    //来招儒门幻指吧..

   return 1;
}

int about_weapon()
{
   object weapon, fall= this_object();
   int chance= random( 10);

//如果身上有 m_weapon 则将他删掉....表示刚刚有人跟他打过...
   if( weapon= present("m_weapon", this_object()))
      destruct( weapon);

   if( chance == 7)
      command("say 哈哈哈...这把新兵器打造的真是好ㄚ...");
   if( chance == 8)
      message_vision("风车:呼呼呼...铁砧:ㄎ一ㄤ...ㄎ一ㄤ...ㄎ一ㄤ...\n", this_object());
   if( chance == 9)
      message_vision("炎热的铁工房燃烧着奇特火焰的大火...\n", this_object());

   return 1;
}

int init_weapon()
{
   object fall= this_object();

   switch( random( 10))
   {
      case 0:                                           //仙剑
         fall->map_skill("sword", "shasword");
         fall->map_skill("parry", "shasword");
         fall->map_skill("dodge", "sha-steps");
         fall->map_skill("move", "sha-steps");
         fall->map_skill("force", "shaforce");

         fall->set("weapon/type", "sword");
         fall->set("weapon/e_type", "sword");
         fall->set("weapon/c_type", "剑");
         fall->set("weapon/name", "独孤九剑");
         break;
      case 1:                                           //京城
         fall->map_skill("dagger", "dragon-dagger");
         fall->map_skill("parry", "dragon-dagger");
         fall->map_skill("dodge", "chen-steps");
         fall->map_skill("move", "chen-steps");
         fall->map_skill("force", "oneforce");

         fall->set("weapon/type", "dagger");
         fall->set("weapon/e_type", "dagger");
         fall->set("weapon/c_type", "匕首");
         fall->set("weapon/name", "溅血匕");
         break;
      case 2:                                           //金刀
         fall->map_skill("blade", "fast-blade");
         fall->map_skill("parry", "gold-blade");
         fall->map_skill("dodge", "fly-steps");
         fall->map_skill("move", "fly-steps");
         fall->map_skill("force", "sixforce");

         fall->set("weapon/type", "blade");
         fall->set("weapon/e_type", "blade");
         fall->set("weapon/c_type", "刀");
         fall->set("weapon/name", "开山刀");
         break;
      case 3:                                           //段家
         fall->map_skill("unarmed", "six-fingers");
         fall->map_skill("stabber", "six-fingers");
         fall->map_skill("parry", "six-fingers");
         fall->map_skill("dodge", "linpo-steps");
         fall->map_skill("move", "linpo-steps");
         fall->map_skill("force", "sunforce");

         fall->set("weapon/type", "stabber");
         fall->set("weapon/e_type", "fan");
         fall->set("weapon/c_type", "扇");
         fall->set("weapon/name", "电风扇");
         break;
      case 4:                                           //恶人
         fall->map_skill("unarmed", "badstrike");
         fall->map_skill("parry", "badstrike");
         fall->map_skill("dodge", "ghost-steps");
         fall->map_skill("move", "ghost-steps");
         fall->map_skill("force", "badforce");

         fall->set("weapon/type", "unarmed");
         fall->set("weapon/e_type", "ring");
         fall->set("weapon/c_type", "指环");
         fall->set("weapon/name", "结婚钻戒");
         break;
      case 5:                                           //雪苍
         fall->map_skill("unarmed", "snow-martial");
         fall->map_skill("dodge", "black-steps");
         fall->map_skill("move", "black-steps");
         fall->map_skill("force", "snowforce");

         fall->set("weapon/type", "unarmed");
         fall->set("weapon/e_type", "armband");
         fall->set("weapon/c_type", "臂环");
         fall->set("weapon/name", "中央圆环");
         break;
      case 6:                                           //陇山
         fall->map_skill("unarmed", "lungshan");
         fall->map_skill("dodge", "henma-steps");
         fall->map_skill("move", "henma-steps");
         fall->map_skill("force", "haoforce");

         fall->set("weapon/type", "unarmed");
         fall->set("weapon/e_type", "armband");
         fall->set("weapon/c_type", "臂环");
         fall->set("weapon/name", "夏威夷花圈");
         break;
      case 7:                                           //儒门
      case 8:
      case 9:
         fall->set("weapon/type", "stabber");
         fall->set("weapon/e_type", "pen");
         fall->set("weapon/c_type", "笔");
         fall->set("weapon/name", "小蛋蛋专用笔");

         break;
   }
   fall->set("weapon/source1", "蛋壳");                 //ccc...
   fall->set("weapon/source2", "蛋黄");                 //hoho...
   fall->set("weapon/value", 100);

   return 1;
}

int scholar_finger()
{
   object me= this_object();
   object corpse, target, *enemy= me->query_enemy();
   string weakest;
   int i, enemy_num= sizeof( enemy);
   int gin, kee, sen;

   int literate, force_lv;
   for( i= 0; i< enemy_num; i++)
   {
      target= enemy[ i];
      gin= target->query("gin");
      kee= target->query("kee");
      sen= target->query("sen");

      literate= target->query_skill("literate");
      force_lv= target->query_skill("force");

      if( gin < kee && gin < sen)
         weakest= "gin";
      if( kee < gin && kee < sen)
         weakest= "kee";
      if( sen < gin && sen < kee)
         weakest= "sen";

      message_vision(@LONG
[1;37m$N双手一合, 口中念念有词, 突然目光精光四射, 从$n身上电扫而过
                施展出儒门失传已久独步武林之

[5;32m＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝
＝＝＝＝＝＝＝＝＝＝＝＝＝[1;37m‘[1;31m儒门幻指[1;37m’[5;32m＝＝＝＝＝＝＝＝＝＝＝＝＝＝
＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝[0m
LONG, me, target);

      if( random( literate+ force_lv) < 150)
      {
         message_vision(@LONG
[1;34m就在千钧一发的最后一刻, $N走差了气, 致使儒门幻指打偏了,
打中路旁看戏的路人甲 + 路人乙 & 路人丙....
LONG, me, target);

         corpse= new("/obj/corpse");
         corpse->move( environment( target));
      }
      else
      {
         message_vision("
[1;31m只见$N全身似乎是着了火似的, 周身燃起了阵阵的刚气,
\n
手中的"+ me->query("weapon/name")+ "电光四射, 招招都射中了$n的周身大穴...[0m
\n
", me, target);
         message_vision("\n[1;37m看来$n已经受到严重的创伤, 已经快要不行了。\n[0m", me, target);
      }

      target->add( weakest, -me->query_skill("stabber")/ 2);
   }
   return 1;
}

object reload_weapon( object weapon)
{
   object fall= this_object();
   string c_unit, wield_part, weapon_type= fall->query("weapon/e_type");

   if( weapon_type == "whip")
   {
      c_unit= "柄";
      wield_part= "手中";
   }
   else if( weapon_type == "pen")
   {
      c_unit= "只";
      wield_part= "手中";
   }
   else if( weapon_type == "ring")
   {
      c_unit= "只";
      wield_part= "指上";
   }
   else if( weapon_type == "armband")
   {
      c_unit= "个";
      wield_part= "臂上";
   }
   else                                      // 剩下的为 剑 刀 匕首 拂尘 扇
   {
      c_unit= "把";
      wield_part= "手中";
   }

   weapon->set_name( fall->query("weapon/name"),({"special "+ fall->query("weapon/e_type"), fall->query("weapon/e_type"), "m_weapon"}) );
   weapon->init_sword( fall->query("weapon/value"));
   weapon->set("skill_type", fall->query("weapon/type"));
   if( fall->query("weapon/type") == "stabber" || fall->query("weapon/type") == "unarmed")
   {
      weapon->set("wield_msg", HIW"只见$N大喝一声, 一道白光迅速由$N怀中窜出, \n在空中盘桓三圈后停在$N的"+wield_part+"化成一"+c_unit+"独特的"+ fall->query("weapon/name")+"。\n"NOR);
weapon->set("unwield_msg", HIW"突然间$N的胸腹之间吸足了气, 朝"+wield_part+"的$n轻轻一吹, 只见$n慢慢的化作一道光芒隐没在$N的胸腹之间。\n"NOR);
   }
   else // if( c_unit == "把" || c_unit == "柄")// 指 剑 刀 匕首 拂尘...扇子不会出现
   {
      weapon->set("wield_msg", HIW"$N轻轻的将"+ fall->query("weapon/name")+"由背后抽出, 只见一道耀眼而诡异的光芒注入了$N身上。\n"NOR);
      weapon->set("unwield_msg", HIW"$N将手中的$n随手往天上一丢, 只见它巧妙的落回了背后。\n"NOR);
   }
   return weapon;
}

int accept_fight( object ob)
{
   object weapon, fall= this_object();
   command("say 哈哈哈...太好了, 老夫正愁没人能来试试我新打造的兵器呢...");
   command("say 那老夫就用它来与你过过招吧...小心了...");

   init_weapon();

   weapon= new("/u/a/acelan/weapon/m_weapon.c");       //不加 wield...

// 真是麻烦...武器抓不到 NPC 的设定....
   weapon= reload_weapon( weapon);

   weapon->move( fall);
   command("wield m_weapon");                     //这边再 wield...
   return 1;
}

int accept_kill(object ob)
{
   object fall= this_object();
   object weapon;
   command("say 想杀我...只怕你还没这个份量...");

   init_weapon();

   fall->set("weapon/value", 200);                      //偷偷调高一点...
   fall->set("force_factor", 50);

   weapon= new("/u/a/acelan/weapon/m_weapon.c");       //不加 wield...

// 真是麻烦...武器抓不到 NPC 的设定....
   reload_weapon( weapon);

   weapon->move( fall);
   command("wield m_weapon");                     //这边再 wield...
   return 1;
}

string make_weapon()
{
   object me= this_player();
   if( present( "m_weapon", me) )
      return("老夫只帮人做一次武器, 老夫已经帮你作过了, 你请回吧。");
   me->set_temp("accept_obj", 1);
   return (@LONG
老夫不帮别人做武器已经很久了, 除非你能拿出百年难得一见
的(材料), 及一笔为数可观的(数目), 否则免谈。
LONG);
}

int do_set_name( string arg)
{
   object weapon;
   object me= this_player();
// 判断是否允许命名...
   if( me->query_temp("allow_name") != 1)
   {
      command("? "+ me->query("id"));
      command("say 你要干嘛ㄚ.....");
      return 1;
   }
// 是否有加参数...
   if( !arg)
   {
      command("say 为你的"+ me->query_temp("weapon_type")+"命名有这么困难吗? 快做决定吧。");
      return 1;
   }
// 将一些设定写入 data
   arg = trans_color(arg);
   me->set("weapon/name", arg+NOR);
   me->set("weapon/source1", me->query_temp("weapon_source1"));
   me->set("weapon/source2", me->query_temp("weapon_source2"));
   me->set("weapon/c_type", me->query_temp("weapon_type"));


   switch( me->query_temp("weapon_type"))
   {
      case "剑":
      {
         me->set("weapon/type", "sword");
         me->set("weapon/e_type", "sword");
         me->set("weapon/c_type", "剑");
         break;
      }
      case "刀":
      {
         me->set("weapon/type", "blade");
         me->set("weapon/e_type", "blade");
         me->set("weapon/c_type", "刀");
         break;
      }
      case "扇":
      {
         me->set("weapon/type", "stabber");
         me->set("weapon/e_type", "fan");
         me->set("weapon/c_type", "扇");
         break;
      }
      case "笔":
      {
         me->set("weapon/type", "stabber");
         me->set("weapon/e_type", "pen");
         me->set("weapon/c_type", "笔");
         break;
      }
      case "指环":
      {
         me->set("weapon/type", "unarmed");
         me->set("weapon/e_type", "ring");
         me->set("weapon/c_type", "指环");
         break;
      }
      case "鞭":
      {  
         me->set("weapon/type", "whip");
         me->set("weapon/e_type", "whip");
         me->set("weapon/c_type", "鞭");
         break;
      }
      case "拂尘":
      {  
         me->set("weapon/type", "whip");
         me->set("weapon/e_type", "whip");
         me->set("weapon/c_type", "拂尘");
         break;
      }
      case "匕首":
      {
         me->set("weapon/type", "dagger");
         me->set("weapon/e_type", "dagger");
         me->set("weapon/c_type", "匕首");
         break;
      }
      case "弓":
      {
         me->set("weapon/type", "archery");
         me->set("weapon/e_type", "bow");
         me->set("weapon/c_type", "弓");
         break;
      }
   }

   new("/obj/m_weapon.c")->move( me);
   command("say 好了, 这把"+ me->query_temp("weapon_type")+ "已经制作完成了, 请收下吧。");
   message_vision("楚胜秋给了你一把"+ arg+ "\n", me);
// 将所有 temp 删除...
   me->delete_temp("give_money");
   me->delete_temp("allow_name");
   me->delete_temp("weapon_source1");
   me->delete_temp("weapon_source2");
   me->delete_temp("weapon_type");
   me->delete_temp("allow_select");
   me->delete_temp("accept_obj");
   return 1;
}

int do_select( string arg)
{
   object me= this_player();
// 检查是否允许选择 武器型态
   if( !me->query_temp("allow_select") )
   {
      command("? "+ this_player()->query("id"));
      command("say 选什么...谁说要让你选了...");
      return 1;
   }
// 没加参数...
   if( !arg)
   {
      command("say 老夫会制造的武器有 刀 扇 笔 剑 弓 指环 鞭 拂尘 及 匕首");
      command("say 快选择(select)吧...");
      return 1;
   }
// 是否在设定型态中
   if( arg != "剑" && arg != "扇" && arg != "笔" && arg != "刀" && arg != "指环" && arg != "鞭" && arg != "拂尘" && arg != "匕首" && arg != "弓")
   {
      command("say 很抱歉, 老夫能力有限, 不会制作这种武器...");
      command("say 请重新选择...");
      return 1;
   }

// ................
   me->set_temp("weapon_type", arg);
   command("say 要做"+ arg+"是吧! 好, 没问题...");

   message_vision("只听见楚胜秋在后院炼铁炉旁敲敲打打的声音, \n不久就见他拿出了一把摄人气魄的"+ arg+ "出来。\n", me);
   command("say 哈哈...真是一把好"+ arg+".....。");
   command("say 请为这把"+ arg+ "命名(set_name)吧。");
   me->set_temp("allow_name", 1);

   return 1;
}

int accept_object(object me, object obj)
{
   string obj_name= obj->query("name");
   string weapon_type= me->query_temp("weapon_type");
// 先判断是否已经问过要 制作武器 了
   if( me->query_temp("accept_obj"))
   {
// 判断是否宇内五禽
      if( obj_name == "真龟血晶" || obj_name == HIY"魔龙鳞"NOR)
      {
         command("pat "+getuid(me));
         command("say 太好了, 这是上佳的"+ obj_name+ "。");
// 是的话设定 temp weapon_source1, destruct( obj)...
         me->set_temp("weapon_source1", obj_name);
         destruct(obj);
// 判断是否有给过五珍, 若无则 return...
         if( !me->query_temp("weapon_source2"))
         {
            command("say 快将‘宇内五珍’拿给我, 好让我帮你打造武器...");
            return 1;
         }
// 已给过 五珍 五禽 判断是否有给钱...
         if( !me->query_temp("give_money"))
         {
            command("say 不过.........请先付款........");
            return 1;
         }
// 已给过 五珍 五禽 & 钱......要求选择武器型态 set_temp("allow_select", 1)
         command("say 请选择(select)你要的武器型态。");
         me->set_temp("allow_select", 1);
         return 1;
      }

// 判断是否宇内五珍
      if( obj_name == "东海冰晶" || obj_name == "百炼丹金")
      {
         command("pat "+getuid(me));
         command("say 太好了, 这是上佳的"+ obj_name+ "。");
// 是的话设定 temp weapon_source2, desturct( obj)...
         me->set_temp("weapon_source2", obj_name);
         destruct(obj);
// 判断是否有给过五禽, 若无则 return...
         if( !me->query_temp("weapon_source1"))
         {
            command("say 快将‘宇内五珍’拿给我, 好让我帮你打造武器...");
            return 1;
         }
// 已给过 五珍 五禽 判断是否有给钱...
         if( !me->query_temp("give_money"))
         {
            command("say 不过.........请先付款........");
            return 1;
         }
// 已给过 五珍 五禽 & 钱......要求选择武器型态 set_temp("allow_select", 1)
         command("say 请选择(select)你要的武器型态。");
         me->set_temp("allow_select", 1);
         return 1;
      }

// 判断是否给钱...
      if( obj_name == "黄金")
      {
// 判断是否超过百金
         if( obj->value() < 1000000)
         {
            command("? "+ getuid(me));
            command("say 数目好像有点不对哦..., 请凑齐百金之后再来...");
            command("say 黄金数目只有"+ obj->value()/10000);
            obj->move( me);
            message_vision("楚胜秋将"+ obj->query("name")+ "还给了$N。\n", me);
            return 0;
         }
// 超过百金...set_temp("give_money", 1), set("weapon/value", gold/5)
         message_vision("只见楚胜秋将黄金拿起来咬了一咬。\n", me);
         command("say 好, 这果然是真的黄金...");
         me->set_temp("give_money", 1);
// 大于 500 gold
         if( obj->value()/ 10000 > 500)
            me->set("weapon/value", 100);
         else
            me->set("weapon/value", obj->value()/50000);

         destruct(obj);

// 检查是否有给过 五禽
         if( !me->query_temp("weapon_source1"))
         {
            command("say 快将‘宇内五禽’拿来吧, 好让老夫赶快动工。");
            return 1;
         }
// 检查是否有给过 五珍
         if( !me->query_temp("weapon_source2"))
         {
            command("say 快将‘宇内五珍’拿来吧, 好让老夫赶快动工。");
            return 1;
         }
// 已给过 五珍 五禽 & 钱......要求选择武器型态 set_temp("allow_select", 1)
         command("say 请选择(select)你要的武器型态。");
         me->set_temp("allow_select", 1);
         return 1;
      }
   }
// 尚未问过 制作武器
   else
   {
      command("? "+getuid(me));
      command("say 给我这种东西干麻...");
      obj->move( me);
      message_vision("楚胜秋将"+ obj->query("name")+ "还给了$N。\n", me);
      return 1;
   }
}
