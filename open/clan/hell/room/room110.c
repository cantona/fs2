inherit ROOM;
void create() {
	set( "short", "$HIY$Breathe$NOR$" );
	set( "owner", "bevis" );
	set( "build", 11250 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room113",
		"north"     : "/open/clan/hell/room/room112.c",
		"west"      : "/open/clan/hell/room/room136",
	]) );
	set( "long", @LONG
$HIR$
Breathe,breathe in the air
Don't be afraid to care
Leave but don't leave me
Look around and choose your own ground
For long you live and high you fly
And smiles you'll give and tears you'll cry
And all you touch and all you see
Is all your life will ever be

Run rabbit run
Dig that hole,forget the sun
And when at last the work is done
Don't sit down it's time to start another one
For long you live and high you fly
But only if you ride the tide
And balanced on the biggest wave
You race towards an early grave.
$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
