#ifndef COLORFULCIRCLE_H
#define COLORFULCIRCLE_H

#include <QWidget>
#include <QPixmap>

/**
 * @brief Widget that displays a colored circle
 * 
 * The circle can be green, yellow or red depending on the current state
 */
class ColorfulCircle : public QWidget {
    Q_OBJECT

public:
    explicit ColorfulCircle(QWidget *parent = nullptr);

    /**
     * @brief Set circle color to green
     */
    void setGreen();

    /**
     * @brief Set circle color to yellow
     */
    void setYellow();

    /**
     * @brief Set circle color to red
     */
    void setRed();

    QSize minimumSizeHint() const override;

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QPixmap mGreenCircle;
    QPixmap mYellowCircle;
    QPixmap mRedCircle;
    QPixmap mCurrentCircle;
};

#endif // COLORFULCIRCLE_H
