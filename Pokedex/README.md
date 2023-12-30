#Pokedex Project

###Purpose:
The purpose of this project is to show my understanding of html, js, and css, and my capabilities in combining them to create a coherent website. To showcase this, the website fetches data from an API (PokeAPI) and utilizes the data to display the information in an organized way. The website itself is meant to act as a pokedex, meaning it stores pokemon and their respective data, which can easily be accessed.

###What I Did/Learned:
In completing this project, I learned how to fetch data from an API and use that data in the making of my website. In this specific case, I used pokeAPI in order to fetch data for each pokemon in Generation 1 and Generation 2, totalling to 251 pokemon. The website uses html in order to format and organize each page, and uses js in order to fetch the data for each pokemon and implement it into that predefined format. In doing so, I created a Pokemon Index page, where all pokemon are displayed in order, as well as a Pokemon Detail page, where you can find more information about the pokemon of your choosing. The website also contains a search feature in order to make it easier to find said pokemon.

##Features:
Below I have listed some of the prior updates made to the pokedex as well as its features:

index.html
- Main pokedex menu
- Creates divs for all the different sections that will be used later by pokemon.js
- Runs pokemon.js (deferred so it runs after the rest of the code)



![Pokedex Index Page](/Pokedex/assets/Index.PNG)



pokemon.js
- Fetches data from PokeAPI and converts the response to java
- Uses data for first 151 pokemon for pokedex menu (Name, Pokedex #, Image)
- Makes search function work with both Pokedex # and name, as well as the clear button




detail.html
- Pokemon detail menu 
- Creates divs for all the different sections that will be used later by pokemon-detail.js
- Runs pokemon-detail.js (deferred so it runs after the rest of the code)



![Pokemon Detail Page](/Pokedex/assets/Detail.PNG)



pokemon-detail.js
- Fetches data from PokeAPI and converts the response to java
- Uses data to fill in information of each pokemon for their detail menus
- Makes the back and forward button work to switch between adjacent pokemon based on Pokedex #
-Assigns colors for each pokemon typing (to be used as background for the pokemon as well as their stat bars), as well as lowering the opacity of said color for unfilled sections of the stat bars


Pokedex Project Update:
“what did you do -


BEFORE:
- Search pokemon by pokedex #, or pokemon name.
- First 151 pokemon listed on index page with images, name, and # (not interactable).
- Detail page contained labels for data, but no data, back and forward and home buttons also not working.

AFTER:
- Added drop down menu to search bar using search.js. (Drop down menu: Pokemon name/ID)
- You can now click the listed pokemon.
- Fetched data from PokeAPI in order to fill out information on pokemon detail page (detail.html, pokemon-detail.js)
-Made buttons (back, forward, home) on pokemon detail page functional.
- Added css file which contains: 
	- Red border around index page, similar to an actual pokedex
	- Boxes/squares for each pokemon, the amount of rows/columns change to fit the screen size/aspect ratio.
	- White box encases pokemon details in pokemon detail page

 what can it do” -

-Pokemon are displayed on the index page alongside their ID#.
-You can search pokemon by their name or # (Chosen via drop down menu) 
-You can click on a pokemon on the index page to access their detail page.
-On the detail page, you can go back or forward between pokemon and there is also a home button that takes you back to the index page.
-Detail page contains a pokemon’s: name, #, sprite, typing, weight, height, abilities, pokedex entry, and base stats (using bars).

Pokedex Changes:
- Pokedex now displays both Gen 1 and Gen 2 pokemon (251 total)
- Search menu drop down now defaults to name instead of number.
- Fairy type pokemon now have an assigned color in the pokemon detail page.
- Pokemon detail page forward and back button now loop (Last pokemon <-> First Pokemon)
- Pokemon Base Stat Maximum is now 255 (100 -> 255)
