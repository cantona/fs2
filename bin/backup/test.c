inherit NPC;

string *dirs;
string *files;

void create()
{
  mixed *get_dirs;
  int   cur;

  set_name( "test", ({ "test" }) );
  set("long", "档案压缩机\n");
  set_heart_beat (1);

  get_dirs = get_dir ("/", -1);
  printf ("get_dirs == %O\n", get_dirs);
/*
  for (cur=0; cur < sizeof (get_dirs); cur++)   // 将档案与目录分开
  { }
*/

  setup();
}

void heart_beat()
{
}
