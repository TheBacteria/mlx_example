#include "../mlx/mlx.h"
#include "stdlib.h"

int		main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	if (!mlx)
		return (1); // NULL;
	win = mlx_new_window(mlx, 1000, 500, "mlx_project");
	if (!win)
	{
		// mlx_destroy_image(mlx);
		free(mlx);
		return (1); // NULL;
	}
	mlx_loop(mlx);
}
