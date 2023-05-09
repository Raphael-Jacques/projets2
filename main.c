#include <allegro.h>

int main() {
    // Initialisation d'Allegro
    allegro_init();
    install_keyboard();

    // Création d'un écran de taille 640x480
    set_color_depth(16);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);

    // Chargement de l'image
    BITMAP *image = load_bitmap("CANARD.bmp", NULL);


    if (!image) {
        // Gestion d'erreur si l'image ne peut pas être chargée
        allegro_message("Erreur lors du chargement de l'image");
        return -1;
    }

    // Affichage de l'image à la position (x, y) = (0, 0)
    draw_sprite(screen, image, 0, 0);

    // Attendre qu'une touche soit pressée
    readkey();

    // Libération de la mémoire et fermeture d'Allegro
    destroy_bitmap(image);
    allegro_exit();

    return 0;
}
END_OF_MAIN();
