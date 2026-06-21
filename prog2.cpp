/** ***************************************************************************
 * @file
 *
 * @mainpage
 *
 * @section CSC_150 - MO1
 *
 * @author Kaeli Clark
 *
 * @date 10/11/2019
 *
 * @par Professor:
 *         Daniel M. de Castro
 *
 * @par Course:
 *         CSC 150
 *
 * @par Location:
 *         McLaury - Room 306
 *
 * @section program_section Program Information
 *
 * @details the program will get a number from the user, then tell the user
 * to select which unit they want. Then tell the user whether it's a sound
 * wave or a light wave. If it's a sound wave then it will tell you what
 * animals can here the sound based on a chart. If it's a light wave, the
 * program will tell you what color the wave would be based on a chart.
 *
 * @section compile_section Compiling and Usage
 *
 * @par Compiling Instructions:
 *      Not a real program
 *
 * @par Usage:
   @verbatim
   c:\> d.exe
   d:\> c:\bin\d.exe
   @endverbatim
 *
 * @section todo_bugs_modification_section Todo, Bugs, and Modifications
 *
 * @bug none
 *
 * @todo none
 *
 * @par Modifications and Development Timeline:
   @verbatim
   Date           Modification
   -------------  -------------------------------------------------------------
   Oct  4, 2019  Added program documentation for the Doxygen writeups
   Oct  4, 2019  Added the include statements and the int variables
   Oct  5, 2019  Started writing code
   Oct  9, 2019  Started revising and fixing errors


   @endverbatim
 *
 *****************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;


//Speed of sound in millimeters/second

// const variables
/*!
 * @brief the value of water rate
 */
const int SPEED_OF_SOUND = 343000;

/** ***************************************************************************
 * @author Kaeli Clark
 *
 * @par Description:
*  the program will get a number from the user, then tell the user
 * to select which unit they want. Then tell the user whether it's a sound
 * wave or a light wave. If it's a sound wave then it will tell you what
 * animals can here the sound based on a chart. If it's a light wave, the
 * program will tell you what color the wave would be based on a chart.
 *
 *
 * @returns 0 program ran successful.
 *
 *****************************************************************************/
int main()
{
    //declare  variables
    int convert_khz;
    int freq_conv;
    int user_input;
    char user_unit;

    //Welcome statement
    cout << "Light and Sound Waves Analysis" << endl << endl;

    //ask user to enter a value
    cout << "Enter a value: ";
    cin >> user_input;

    //if statement that stops program if user input is less than or equal to 0
    if (user_input <= 0)
    {
        cout << "Invalid value selection; please run program again" << endl;

        return 0;
    }

    //if else statements

    //ask user for unit 
    else if (user_input > 0)
    {
        cout << "Select the units (H)z, (k)Hz, (T)Hz, (m)m, (n)m: ";
        cin >> user_unit;

        //determine if input unit is 'H', if so 
        if ((user_unit == 'H') || (user_unit == 'h'))
        {
            //print what the selected unit is
            cout << "You have selected Sound Waves" << endl;

            if ((user_input >= 15) && (user_input <= 15000))
            {
                cout << "Humans can hear this sound" << endl;
            }
            if ((user_input >= 125) && (user_input <= 2000))
            {
                cout << "Chickens can hear this sound" << endl;
            }
            if ((user_input >= 17) && (user_input <= 10500))
            {
                cout << "Elephants can hear this sound" << endl;
            }
            if ((user_input >= 64) && (user_input <= 44000))
            {
                cout << "Dogs can hear this sound" << endl;
            }
            if ((user_input >= 56) && (user_input <= 60000))
            {
                cout << "Gerbils can hear this sound" << endl;
            }
            if ((user_input >= 55) && (user_input <= 77000))
            {
                cout << "Cats can hear this sound" << endl;
            }
            if ((user_input >= 10300) && (user_input <= 115000))
            {
                cout << "Little brown bats can hear this sound" << endl;
            }
            if ((user_input >= 1000) && (user_input <= 123000))
            {
                cout << "Beluga whales can hear this sound" << endl;
            }
            /*if the user input is outside the range of the chart, print an
            error message*/
            else if ((user_input < 15) || (user_input > 123000))
            {
                cout << "None of the selected animals can hear this sound"
                    << endl;
            }

            return 0;
        }

        //determine if input unit is 'K', if so
        else if ((user_unit == 'K') || (user_unit == 'k'))
        {
            //print what the selected unit is
            cout << "You have selected Sound Waves" << endl;
            convert_khz = user_input * 1000;

            if ((convert_khz >= 15) && (convert_khz <= 15000))
            {
                cout << "Humans can hear this sound" << endl;
            }
            if ((convert_khz >= 125) && (convert_khz <= 2000))
            {
                cout << "Chickens can hear this sound" << endl;
            }
            if ((convert_khz >= 17) && (convert_khz <= 10500))
            {
                cout << "Elephants can hear this sound" << endl;
            }
            if ((convert_khz >= 64) && (convert_khz <= 44000))
            {
                cout << "Dogs can hear this sound" << endl;
            }
            if ((convert_khz >= 56) && (convert_khz <= 60000))
            {
                cout << "Gerbils can hear this sound" << endl;
            }
            if ((convert_khz >= 55) && (convert_khz <= 77000))
            {
                cout << "Cats can hear this sound" << endl;
            }
            if ((convert_khz >= 10300) && (convert_khz <= 115000))
            {
                cout << "Little brown bats can hear this sound" << endl;
            }
            if ((convert_khz >= 1000) && (convert_khz <= 123000))
            {
                cout << "Beluga whales can hear this sound" << endl;
            }
            /*if the user input is outside of the chart range, print an error
            messgae*/
            else if ((convert_khz < 15) || (convert_khz > 123000))
            {
                cout << "None of the selected animals can hear this sound"
                    << endl;
            }

            return 0;

        }

        //determine if the input unit is 'M', if so
        else if ((user_unit == 'M') || (user_unit == 'm'))
        {
            //print what the selected unit is
            cout << "You have selected Sound Waves" << endl;


            freq_conv = (SPEED_OF_SOUND / user_input);

            if ((freq_conv >= 15) && (freq_conv <= 15000))
            {
                cout << "Humans can hear this sound" << endl;
            }
            if ((freq_conv >= 125) && (freq_conv <= 2000))
            {
                cout << "Chickens can hear this sound" << endl;
            }
            if ((freq_conv >= 17) && (freq_conv <= 10500))
            {
                cout << "Elephants can hear this sound" << endl;
            }
            if ((freq_conv >= 64) && (freq_conv <= 44000))
            {
                cout << "Dogs can hear this sound" << endl;
            }
            if ((freq_conv >= 56) && (freq_conv <= 60000))
            {
                cout << "Gerbils can hear this sound" << endl;
            }
            if ((freq_conv >= 55) && (freq_conv <= 77000))
            {
                cout << "Cats can hear this sound" << endl;
            }
            if ((freq_conv >= 10300) && (freq_conv <= 115000))
            {
                cout << "Little brown bats can hear this sound" << endl;
            }
            if ((freq_conv >= 1000) && (freq_conv <= 123000))
            {
                cout << "Beluga whales can hear this sound" << endl;
            }
            /* if the user input is outside the chart range, print an error
            message */
            else if ((freq_conv < 15) || (freq_conv > 123000))
            {
                cout << "None of the selected animals can hear this sound"
                    << endl;
            }

            return 0;

        }


        //determine if input unit is 'T', ifso
        else if ((user_unit == 'T') || (user_unit == 't'))
        {
            //print what the selected unit is
            cout << "You have selected Light Waves" << endl;

            if ((user_input > 715) && (user_input <= 790))
            {
                cout << "Color is violet" << endl;
            }
            if ((user_input > 690) && (user_input <= 715))
            {
                cout << "Color is indigo" << endl;
            }
            if ((user_input > 600) && (user_input <= 690))
            {
                cout << "Color is blue" << endl;
            }
            if ((user_input > 540) && (user_input <= 600))
            {
                cout << "Color is green" << endl;
            }
            if ((user_input > 510) && (user_input <= 540))
            {
                cout << "Color is yellow" << endl;
            }
            if ((user_input > 480) && (user_input <= 510))
            {
                cout << "Color is orange" << endl;
            }
            if ((user_input > 420) && (user_input <= 480))
            {
                cout << "Color is red" << endl;
            }
            /*if the user input is outside the chart range, print an error
            message*/
            else if ((user_input < 420) || (user_input > 790))
            {
                cout << "This frequency is outside the visible light spectrum"
                    << endl;
            }
            return 0;
        }

        //determine if input unit is 'N', if so
        else if ((user_unit == 'N') || (user_unit == 'n'))
        {
            //print what the selected unit is
            cout << "You have selected Light Waves" << endl;

            if ((user_input >= 380) && (user_input <= 420))
            {
                cout << "Color is Violet" << endl;
            }
            if ((user_input > 420) && (user_input <= 440))
            {
                cout << "Color is Indigo" << endl;
            }
            if ((user_input > 440) && (user_input <= 520))
            {
                cout << "Color is Blue" << endl;
            }
            if ((user_input > 520) && (user_input <= 555))
            {
                cout << "Color is Green" << endl;
            }
            if ((user_input > 555) && (user_input <= 590))
            {
                cout << "Color is Yellow" << endl;
            }
            if ((user_input > 590) && (user_input <= 625))
            {
                cout << "Color is Orange" << endl;
            }
            if ((user_input > 625) && (user_input <= 720))
            {
                cout << "Color is Red" << endl;
            }
            /*if the user input is ouside the chart range, print an error
            message*/
            else if ((user_input < 420) || (user_input > 720))
            {
                cout << "This wavelength is outside the visible light spectrum"
                    << endl;
            }
            return 0;


        }
    }

    /*if the user input is less than or equal to zero, print an error
    message*/
    else
    {
        cout << "Invalid unit selection; please run program again" << endl;

        return 0;
    }



    //end program
    return 0;
}
