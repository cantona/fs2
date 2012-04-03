inherit ROOM;

void create ()
{
  set ("short", "LPC 说明");
  set("long", @LONG
这份说明文件来自 Descartes of Borg 23 april 1993 原作者是 George Reese
有意取得原文的可以自下面地方用 ftp 取得:
    nctuccca.edu.tw:/packages/networking/MUD/LPmud/MudOS/Docs/BasicLPC.tar.gz
或者用 email 跟原作者讨论 borg@hebron.connected.com

intr	介绍
chap1	基本 LPC 程式
chap2	LPC 的资料型态
chap3	函数
chap4	继承的基本概念
chap5	变数的处理
chap6	流程的控制
chap7	Object 这个资料型态

请选择一个出口前往.
LONG);

  set("exits", ([
	"back"		:  "/u/w/wade/workroom",
	"intr"		:  __DIR__"intr",
	"chp1"		:  __DIR__"chap1",
	"chp2"		:  __DIR__"chap2",
	"chp3"		:  __DIR__"chap3",
	"chp4"		:  __DIR__"chap4",
	"chp5"		:  __DIR__"chap5",
	"chp6"		:  __DIR__"chap6",
	"chp7"		:  __DIR__"chap7",
  ]) );
  setup();
}
