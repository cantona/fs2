inherit ITEM;
void create()
{
set_name("血魔残集", ({ "bloodbook","book" }));
set_weight(100);                                                                
if( clonep() )                                                                  
set_default_object(__FILE__);                                                   
else {                                                                        
set("unit", "本");                                                             
set("long",
    "这是血魔练剑的记事本, 上面有许多人形图案, 跟你所学武学几乎完全不同
看情形是很难领误的...\n"); 
set("value", 10);                                                               
   set("no_drop", 1);
   set("no_give", 1);
   set("no_get", 1);
   set("no_auc", 1);
set("material", "paper");                                                      
set("skill", ([                                                      
"name": "blood_sword",                                                         
              "sen_cost":     600,
              "difficulty":   55,
              "max_skill": 99,                                               
// from this object.                                                                                
]));
        setup();
}
}
int query_autoload()
{
  object player;
  if(!environment()) return 0;
  if(!living(environment())) return 0; 
 
  player=environment();
  if(player->query("family/family_name")=="仙剑派" && player->query("bloodsword") > 1)
    return 1;
  else 
  return 0;
}

