inherit NPC;

string *word1 = ({
  "王大妈", "李二婶", "归三娘", "林四姨", "干妈", "舅妈",
  "四姨婆", "长舌妇",
});

string *word2 = ({
  "陈老头", "丁大丙", "酸梅超人", "大雄", "怪医秦博士", "阿甘",
});

string hname, wname;
string long();

void create()
{
	set_name("好友",({"friend"}));
	set("long", (: long :) );
	set("no_kill",1);
	setup();
}

string long()
{
  object me=this_player();

  switch (random(3)) {
	case 0:
	  return word1[random(sizeof(word1))]+"\n";
	  break;
	case 1:
	  return word2[random(sizeof(word2))]+"\n";
	  break;
	case 2:
	  if (random(2))
	    return "新郎"+hname+"的好友"+me->query("name")+"。\n";
	  else
	    return "新娘"+wname+"的好友"+me->query("name")+"。\n";
  }
}

int start_marry(object husband, object wife)
{
  hname = husband->query("name");
  wname = wife->query("name");
} 
