#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
        set( "long", "九八年七月,分站历经了一件重大的事件!!!
1.老玩家milk(忘了还是acme)愿意支持分站发展下去。
2.Acmesoft是华宇电脑的一个新事业部门,其负责人(acme)愿意提供位置及主机。
  来support FS。
3.同时Wade回到分站来接手,并且利用第一次网聚时到Acmesoft公司洽淡GFS
  的事。
4.另外为了让分站的FS更好,Wade将中兴的狂想空间及分站(Nkit)一起搬到了交大
  ,因为这样所以使分站可以拿到狂想空间的所有资料(之前欠缺的圣火及少林)
5.同时之间我进行了分站Fs的改板,将原有的Mudos v21c2提升到那时最新的v22 pre11
  的板本。
此重大事件在七、八、九、十月中陆续发生,同时lum、fir、wasami.等超强的高手
也在Wade的召集下来到FS分站来帮忙,Konn大大也是由Wade大大请回来管理那时中
兴大学的狂想空间。
" );
  set("exits", ([
  "north" : __DIR__"newhand6-12",
  "south" : __DIR__"newhand6-14",
               ]));
  set("light_up", 1);
  setup();
}

