# Post Grad Ponderin

By Jackson Detweiler, Liliana Lusvardi, Lucia Weiner

## Description

**Post Grad Ponderin** is a project designed to help individuals find their ideal living location based on personal preferences. The tool provides recommendations for top counties that match user preferences, considering:

- Low poverty rates
- Good education
- Low unemployment
- High income

## Motivation

As graduation approaches, many of us wonder where we want to settle down post-college. **Post Grad Ponderin** was created to address this question and assist in making informed decisions about future living locations.

## Features

- CSV Parsers used to analyze over 100,000 data points
- Interface to input personal preferences on categories
- Outputs the three best-matching counties based on user-defined criteria
- Implements merge and heap sort to analyze performance when sorting large amounts of class instances

## Technologies Used

This project was implemented in **C++** and utilizes the following libraries and features:

- **Standard C++ Libraries:**
    - `<chrono>` - time measurement 
    - `<fstream>` - file handling, CSV Parsing
    - `<sstream>` - string manipulation, CSV Parsing
    - `<vector>` - data storage
    - `<string>` -  string operations
    - `<iostream>` - input/output
- **SFML (Simple and Fast Multimedia Library):** For graphical interface and interaction.
- **Sorting Algorithms:**
    - **Merge Sort:** Used to handle and sort large datasets efficiently.
    - **Heap Sort:** Employed as a comparison to study performance under similar conditions.
    -  Both were made by the team members

## Sources

Our data came from the following sources
- https://www.openintro.org/data/?data=county_complete
- https://www.ers.usda.gov/data-products/county-level-data-sets/

We also used class resources from and information taught in COP3530, COP3503C, COP3502C
