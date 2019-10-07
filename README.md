# engine-v2
# Project 2 Writup
1: The way that I approached constructing a time class was identifying all the possible use cases for time.
My time class contained a total of three public data sources. In order to change the scale of time I added a scalefactor variable that controls the speed of the Player.
sf::Clock clock;
sf::Time timeSinceLastUpdate;
sf::Time elapsedTime;
I implemented a pause function using the P key the pause is based on holding down the P key.
## General thoughts on the project.
This project was honestly very difficult for me to do, I felt lost and got easily frustrated when things weren't working the way I wanted them to.
I spent a lot of time learning how to use basic SFML libraries and completing tasks that were assigned in the previous project. In the future I would like to be able to complete the assignments ontime. I started this semester out on the wrong foot, and this is the final class that I need to get up to speed with the rest of the class.
The curren server implementation I have does not work, I wanted to use a client server design with each client containing a UUID to identify the player. My goal was to have multiple players models interacting with one another on the same canvas and be constantly updating to the server. Currently I am having an issue running 0mq and am not sure how to fix it.
