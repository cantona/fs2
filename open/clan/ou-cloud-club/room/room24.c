// Room : /open/clan/ou-cloud-club/room/room24.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
你来到一个空间极度异常的区域．．．只见周围有着
八个拱型的洞，并且透发出七彩光芒，难道这里就是本庄
的奇象之一【$HBBLU$八$HBYEL$方$HBRED$杀$HBCYN$灵$HBGRN$道$NOR$】，据说这里是为了让帮众更受
一层的试炼，所以本庄庄主便以任令空间切割的功力，将
此区域分为八个空间，并通往八个神秘的世界，除此之外
，老一辈的长老还说，八个通道最后会到达一个最终的区
域，而且竟然连庄主本人也未到达，而那个神秘的区域可
以令任何人得到[0;1;5;33m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5mb[1;5m□[1;5mU[1;5m□[1;5mB[1;5m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5mU[0m的能力．．．


                    $HIY$天界$NOR$
                 
              $HIC$龙界$NOR$         $HIM$幻界$NOR$       
         
        $YEL$天竺$NOR$     $HBBLU$八$HBYEL$方$HBRED$杀$HBCYN$灵$HBGRN$道$NOR$      $CYN$朝鲜$NOR$

              $HIB$灵界$NOR$         $HIG$妖界$NOR$  

                    $HIR$地狱$NOR$



LONG);
	set( "short", "$HBBLU$八$HBYEL$方$HBRED$杀$HBCYN$灵$HBGRN$道$NOR$" );
	set( "build", 10030 );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/ou-cloud-club/room/room25.c",
		"down"      : "/open/clan/ou-cloud-club/room/room22",
		"north"     : "/open/clan/ou-cloud-club/room/room12.c",
]) );
	set( "light_up", 1 );
	setup();

	}
