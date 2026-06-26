#pragma once
 
#include "Sprite.h"
#include <string>
 
class TileSet {
public:
    TileSet(int worldTileWidth, int worldTileHeight, std::string file,
            int sourceTileWidth = 0, int sourceTileHeight = 0);
 
    void RenderTile(unsigned index, float x, float y);
    int GetTileWidth() const;
    int GetTileHeight() const;
 
private:
    Sprite tileSet;
    int tileWidth;   // tamanho de renderização/mundo (ex: 128)
    int tileHeight;  // tamanho de renderização/mundo (ex: 128)
    int tileCount;
};
