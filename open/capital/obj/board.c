//p_human.c by chun 
			
inherit ITEM;

void create()
{
	set_name("公告栏",({"board"}) );
	set("long",@TEXT
	奉天承运  皇帝诏曰
	
	近日京城盗贼(thief)猖獗, 数户大宅连续遭窃
	真为目无法纪, 特许悬赏五两黄金与各路勇士,
	望能将此盗贼缉捕归案, 若有意者请向京城总衙
	大人纪无尘详问。

	钦此

TEXT);	
	set("no_get",1);
        setup();
}
