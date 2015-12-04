#include <trimester.h>
#include <marks.h>

int main()
{
    float marks[4], average;
    int discount;
    bool suspend;

    // Used to read student's last name and first name from stdin;
    read_student();

    // Used to read student's marks from stdin;
    read_marks(marks);

    average = calculate_average(marks, 4);
    discount = check_for_discount(average);
    suspend = check_to_suspend(average);

    // Used to show specific message based on the parameters;
    show_message(suspend, discount, average);

    return 0;
}
