#include "TileSet.h"
#include "Game.h"
 
TileSet::TileSet(int worldTileWidth, int worldTileHeight, std::string file,
                  int sourceTileWidth, int sourceTileHeight)
    : tileSet(file), tileWidth(worldTileWidth), tileHeight(worldTileHeight), tileCount(0) {
 
    // Se não for informado, assume que a imagem já está no tamanho de mundo
    // (mantém compatibilidade com o construtor de 3 argumentos usado antes).
    if (sourceTileWidth <= 0)  sourceTileWidth  = worldTileWidth;
    if (sourceTileHeight <= 0) sourceTileHeight = worldTileHeight;
 
    if (tileSet.IsOpen() && sourceTileWidth > 0 && sourceTileHeight > 0) {
        int columns = tileSet.GetWidth() / sourceTileWidth;
        int rows = tileSet.GetHeight() / sourceTileHeight;
        tileCount = columns * rows;
        tileSet.SetFrameCount(columns, rows);
    }
}
 
void TileSet::RenderTile(unsigned index, float x, float y) {
    if (index >= static_cast<unsigned>(tileCount)) return;
 
    tileSet.SetFrame(static_cast<int>(index));
    tileSet.Render(Game::GetInstance().GetRenderer(),
                   static_cast<int>(x),
                   static_cast<int>(y),
                   tileWidth,
                   tileHeight);
}
 
int TileSet::GetTileWidth() const { return tileWidth; }
int TileSet::GetTileHeight() const { return tileHeight; }
 

