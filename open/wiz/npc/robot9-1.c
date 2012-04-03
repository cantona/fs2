
inherit NPC;
						
void create()
{
	set_name("阿九一号机器人", ({ "robot 9-1","robot","9-1" }) );
	set("race", "人类");
	set("age", 30000);
	set("gender", "男性");
	
	set("chat_chance",5);
	
	set("chat_msg",({
	"Voice from Robot9-1:Everything is under control..\n",
	}));
		
	
	set("long",@TEXT
	  这是一台能帮忙检定武器价值(value)的机器人
	  经过经密的回授及Fuzzy控制，达到每秒
	  转65535圈的疯狂记录。
TEXT);	  
										
	set("attitude", "friendly");

	setup();
}
								
void init()
{ 	::init();
    	add_action("do_value","value");
}

//这是抄 chun 的 hockshop.:P							
int do_value(string arg)
{
   object ob;
   int weight,damage,i,value,t1,t2,x,y,z;
   string material;
 //  float i,value,t1,t2,x,y,z;				   
   													
   if( !arg )
   return 0;
   
   else
   {
   	if(!(ob = present(arg,this_player())) )
   	return notify_fail("你要拿甚么给阿九一号估价?\n");
   	
   	if( ob->query("money_id") )
   	return notify_fail("R u out of ur mind?\n");
   	
   	if( ob->query("weapon_prop") == 0 )
   	return notify_fail("你肯定这东西能打人?\n");
   	
	
     	damage = ob->query("weapon_prop/damage");
   	weight = ob->query_weight();
   	material = ob->query("material");
   	t1=(weight/7);
   	t2=damage/0.25;
	x=(t1)*(t2)*0.0032;
	i=(t1)*(t2)*0.004;
        y=(t1)*(t2)*0.012;
        z=(t1)*(t2)*0.02;	
		   
	command("say"+ sprintf(" %s 重 %d ，质料是 %s ，攻击指数 %d 。\n"
	        ,ob->short(),weight,material,damage));
																					
	switch(material)
	{
	 case "iron" : value = x;
	 	       break;
	 case "steel" : value = i;
	 		break;
	 case "ironsteel" : value = y; 
	 		    break;
   	 case "crimsonsteel" : value = z;
   	 		    break;
        }
						
	command("say 公定价钱是...");
        command("say"+ sprintf(" %d \n",value));
        return 1;
								
	
//	if( material == "iron" )
//	value = (int)(i*0.8);
//	sprintf("阿九一号 > 这玩意公定value %d 加减30%都可接受 \n",value);
//	return 1;

//	if( material == "steel" )
//	value = i; 
//        sprintf("阿九一号 > 这玩意公定value %d 加减30%都可接受 \n",value);
//        return 1;
												                        
//	if( material == "ironsteel" )
//	value = i*3;
//	sprintf("阿九一号 > 这玩意公定value %d 加减30%都可接受 \n",value);
//	return 1;
	        
//	if( material == "crimsonsteel" )
//	value = i*5;
//	sprintf("阿九一号 > 这玩意公定value %d 加减30%都可接受 \n",value);
//	return 1;
  }        
}