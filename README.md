<h2> Multi Handle Slider </h2>

Unreal Engine 4.20+ plugin that allows you to use UMG slider with multiple targets (handles) to track against player pawn.

**How to use it?**

1) Git clone this repo into Plugins folder of your (code) project and recompile the project.
2) Add Multi Handle Slider widget to your UMG widget.
3) Create DataTable with the row of type Target Type Description. Add entries for needed target types (i.e. Friend or Enemy).
3) Select added Multi Handle Slider and set created DataTable.
3) Call SetUpPlayerPawn on Multi Handle Slider widget.
4) Call AddTargetActor or AddTargetLocation on Multi Handle Slider widget to set up slider targets.
5) Call tick event on Multi Handle Slider widget to update targets positions.

**What is it about?**

This plugin add slider with support of multiple handles. It is build on top of default slider widget. 
