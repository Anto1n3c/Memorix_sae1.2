# Memory Game - SAE 1.2 Project

This project involves the implementation of the Memory game with a variant called Mémorix. The game is intended to be developed in an unspecified programming language. The following rules and specifications must be adhered to.

## 1. The Memory Game

The basic Memory game consists of a set of cards with n pairs. Each player flips two cards in turn. If they find a pair, they score a point and play again. The winner is the one who uncovers the most pairs.

## 2. Variant: Mémorix Game

The Mémorix variant includes a Joker card. The card deck is composed of 2n + 1 cards. Players must also manage the random movements of the Joker. If they do not find a pair after E consecutive attempts, they lose a point.

## 3. Data Structures

Use an array of L rows and C columns to represent the game. Another set of data structures is needed to track player information, such as username, score, etc.

## 4. Game Parameters

Before starting, define the number of players (maximum 4) and their characteristics. Also, define the values of L, C, and E.

## 5. Computer Strategy

The computer does not cheat and has a flawless memory. However, its movements can be influenced by the Joker.

## 6. Game Progression

The game unfolds with turns where players flip two cards. If a pair is found, the cards remain visible for a certain time. Players lose points for consecutive failures.

## 7. Random Generations

Use a random permutation algorithm to generate the card array. Update the array after each discovered pair.

## 8. Modalities

The project is to be carried out in groups of 2 students. Code structure and clarity are important. Evaluation will be done on computers from the Department of Computer Science with compilation, testing, and questions.

**Sustaining Date: Week of January 8, 2024.**

The application must function strictly in an Li environment.
