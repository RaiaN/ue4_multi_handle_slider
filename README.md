<h2> Multi Handle Slider </h2>

Unreal Engine 4.20+ plugin that allows you to use UMG slider with multiple handles (targets). It also supports handles tracking against player pawn.

**How to use it?**

1) Git clone this repo into Plugins folder of your (code) project and recompile the project.
2) Add Multi Handle Slider widget to your UMG widget.
3) Create DataTable with the row of Target Type Description type. After that add rows for desired target types (i.e. Friend and/or Enemy).
3) Select added Multi Handle Slider and set created DataTable.
3) Call SetUpPlayerPawn on Multi Handle Slider widget.
4) Call AddTargetActor or AddTargetLocation on Multi Handle Slider widget to set up slider targets.
5) Call tick event on Multi Handle Slider widget to update positions of the targets.

**What is it about?**

This plugin add slider with support of multiple handles. It is build on top of default slider widget. 
