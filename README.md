This is an internal cheat for **_Counter-Strike: Global Offensive_** I've been working on as my training of reverse engineering.

**Disclaimer**: Since I don't intend to make this a malicious software, this isn't considered to be performed in multi player mode. 
**We won't take any responsibility if a problem occurs because of this software.** Keep that in mind.

# :syringe: How to build this hack

### requirement
- [DirectxSDK](https://www.microsoft.com/en-au/download/details.aspx?id=6812)
- Visual studio 2019

You can select from two ways to build this hack.
I believe all you need in order to build this project except DirectxSDK is already included which is [Minhook](https://github.com/TsudaKageyu/minhook), [ImGui](https://github.com/ocornut/imgui), and [toml11](https://github.com/ToruNiina/toml11).
They're in Dependencies directory.

For compiling the cheat, there is a convenient batch script that automates the process. All you need to do is run it:

```Shell
$ .\compile.bat
```

# :scroll: Menu

You're accessible to the hack menu by pressing <kbd>INSERT</kbd> key on your keyboard. (While the menu is open, input to CSGO will be locked)

You can toggle on/off and tweak parameters in the tabs with the name of each hack.

![Hack menu](https://user-images.githubusercontent.com/33578715/91472649-5aa4a980-e8ca-11ea-8352-21b6400a494b.gif)

You can choose what hacks to be visible with the menu bar.
Several hacks're set to invisible by default.
![menu visible](https://user-images.githubusercontent.com/33578715/91351549-0f7f8d80-e81b-11ea-9216-e7d77a0566d1.png)

# :computer: Hacks

## Aimbot

This is the feature I can guarantee the highest quality in the hacks I offer here.

Turning this function on automatically lets you aim at enemy's head with 100% precision.
It select the closest enemy from where your crosshair is as a target.

Tweaking Smoothness bar affects the smoothness of sticking aim.
By changing the value of the Range bar, you can change the range in which the aimbot will react

![aimbot](https://user-images.githubusercontent.com/33578715/89108283-b31e8d80-d469-11ea-8e55-e4e469d74576.gif)

## Glow hack

This feature allows you to see both opponents and teammate's outline through walls.

![Glow hack](https://user-images.githubusercontent.com/33578715/89087560-48b51100-d3c7-11ea-9ada-8ef04acfa52c.png)

## ESP hack

With this hack turned on:
- Red and green lines from player's foot position towards every enemies and allies are displayed.
- Outline rectangles are drawn on the players

![esp](https://user-images.githubusercontent.com/33578715/92253522-30726d80-ef02-11ea-80d3-fdb7045851d0.png)

## Trigger bot

Once you turn this on, you no longer have to press left click when you engage them.
This feature will complete the job for you.

This is designed to use in conjunction with Aimbot.

## Anti recoil

This is basically a recoil control system.
It automatically calculate the in comming recoil and manipulate your angle to handle it.
But this doesn't guarantee the 100% accuracy.

![Anti recoil](https://user-images.githubusercontent.com/33578715/89087634-769a5580-d3c7-11ea-83b1-dc31345e7424.png)

## Minimap hack

Minimap hack will show you all enemy positions on the mini map as a red dot even if they're not in your sight which would be super cool.

![Minimap hack](https://user-images.githubusercontent.com/33578715/96349413-0c4da300-10e2-11eb-8ba9-b1965b1a7dfb.png)

## Anti AFK

This feature basically make you move randomly every 50 seconds so that you probably not gonna get kicked automatically I guess.

## FOV

You can change your field of view from 60 to 120 degrees.

# :put_litter_in_its_place: Uninstall

Since this cheat creates some setting files, u have to follow this to clear things up.

