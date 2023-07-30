namespace MauiApp1;

public partial class MainPage : ContentPage
{
	int count = 0;

	public MainPage()
	{
		InitializeComponent();
		int aaa = HolaMundoWrapper.ObtenerNumeroMaui();
    }

}

