inherit BOOK;

#define BOOK_PATH "/open/port/obj/"
#define BOOK_NAME "map"
#define C_BOOK_NAME "枫林港地图"
				
void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "map" }) );
	 set( "long", "这是一张官定的枫林港地图 .\n");
  						
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}

void init()
{
  ::init();
}
