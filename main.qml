import QtQuick 2.6
import QtQuick.Window 2.2
import Test 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
//    Textballoons {

//    }
    Shape {
        sth: 1
        x: 0
        y: 0
//        width: 100
//        height: 100
        width: parent.width
        height: parent.height
        color: "red"
    }
    Shape {
        sth: 2
        x: 90
        y: 90
        width: 100
        height: 100
        color: "green"
    }
    Shape {
        sth: 3
        x: 0
        y: 90
        width: 100
        height: 100
        color: "blue"
    }
}
