package com.lak.ui;
import ru.stablex.ui.UIBuilder;
import ru.stablex.ui.widgets.Widget;
import com.lak.simulator.controllers.GameStateController;
import com.xenizogames.widgets.GridWidget;
/**
 * ...
 * @author Moussa & Sissoko
 */
class LAKUI 
{
	public function new() 
	{
		//UIBuilder.setTheme('ru.stablex.ui.themes.android4');
		UIBuilder.regClass('GridWidget');
		UIBuilder.init();
	}
}