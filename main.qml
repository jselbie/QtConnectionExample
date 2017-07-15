import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Item {
    visible: true
    width: 640
    height: 480


    Rectangle {
        id: rect;
        color: "black"
        width: 200
        height: 200
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 10
        anchors.rightMargin: 10
    }


    ColorAnimation {
        id: anim1
        target: rect
        property: "color"
        duration: 1000
        to: "cyan"
    }

    ColorAnimation {
        id: anim2
        target: rect
        property: "color"
        duration: 1000
        to: "black"
    }

    Button {
        id: btn
        anchors.top: rect.bottom
        anchors.topMargin: 10
        anchors.left: rect.left;
        onClicked: {
            model.power += 1;
        }
        text: "Click Me"
    }


    Connections {
        target: model
        onPowerChanged: {
            console.log("current value of power is " + model.power);
            if (model.power % 2) {
                anim1.start();
                anim2.stop();
            } else {
              anim2.start();
              anim1.stop();
            }
        }
    }




}
