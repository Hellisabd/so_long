# So Long – @42Born2Code

> *My first graphical project – and I had a lot of fun building it! 🎮*

---

## About

**So Long** is a 2D game developed using the MLX42 graphics library. It is the first graphical project in the 42 curriculum and serves as an introduction to simple game development. The player must collect all items and reach the exit while navigating a tile-based map.

This was my first time working with a graphics library, and I had a great time exploring rendering, input handling, and animations!

---

## Installation & Usage

### Requirements

* **GNU Make ≥ 3.81**
* **GCC ≥ 4.2.1**

### Building the program

```bash
# Clone the repository
git clone https://github.com/Hellisabd/so_long.git

# Build mandatory version
cd so_long
make

# (Optional) Build bonus version
make bonus
```

### Running the game

```bash
./so_long maps/map.ber

# or for bonus features:
./so_long_bonus maps/map.ber
```

---

## Main Project Instructions

### Mandatory

* Use **MLX42** to open a window and render the game map.
* Read and parse a `.ber` map file.
* Validate that the map:

  * Is rectangular
  * Is surrounded by walls
  * Contains one `P`, one `E`, at least one `C`
* Implement movement using `W`, `A`, `S`, `D`.
* Player can’t move through walls.
* Exit opens only after all collectibles are gathered.
* Display move count in the terminal.
* Free all memory and close cleanly on exit.

---

## Bonus Features

* **Enemy patrols** (`X`) that end the game on collision.
* **On-screen move counter** using textures.
* **Sprite animations** (animated collectibles, player, etc.).
* **Improved controls** and key handling.

---

## Architecture (High-level)

1. **Map Parser** – loads and validates the `.ber` map, checks path validity.
2. **Game Loop** – continuous render/update loop using `mlx_loop`.
3. **Renderer** – draws tiles and entities using `mlx_put_image_to_window`.
4. **Input Handler** – processes key events to move the player.
5. **State Manager** – handles collectibles, win/loss logic, enemy movement.

---

## Notes

* This was my **first graphics project** and I learned a lot about rendering, memory management, and user interaction.
* The code is **commented** and structured for clarity.
* Tab size is set to 4 — intentional spacing follows Norminette style.
* 
---

Enjoy! 🎮
