inherit BULLETIN_BOARD;                                                         
#include <ansi.h>                                                               
void create()                                                                   
{                                                                               
set_name(HIR"惩罚发表处"NOR,({"means board","board"}));                         
set("location","/open/wiz/fsroom2");                                            
set("board_id","fskill_b");                                                     
set("long","这里是提供巫师用来发表被惩罚玩家或巫师的地方,不希望你也在榜上");    
set("wiz_post",1);
setup();                                                                        
set("capacity",300);                                                            
}                                                                             
