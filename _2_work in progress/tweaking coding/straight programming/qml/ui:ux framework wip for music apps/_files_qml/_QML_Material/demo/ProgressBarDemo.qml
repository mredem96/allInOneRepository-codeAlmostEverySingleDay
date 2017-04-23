import QtQuick 2.4
import QtQuick.Layouts 1.1
import "./../modules/Material/"
import "./../modules/Material/Extras/"
import "./../modules/Material/fonts"
import "./../modules/Material/icons/"
import "./../modules/Material/ListItems" as ListItem
import "./../modules/QtQuick/Controls/Styles/Material"

Item {
    implicitHeight: grid.implicitHeight + Units.dp(40)
    anchors.fill: parent

    GridLayout {
        id: grid
        anchors.centerIn: parent
        columns: 2
        columnSpacing: Units.dp(20)
        rowSpacing: Units.dp(20)

        Label {
            text: "Determinate"
        }

        ProgressBar {
            Layout.fillWidth: true
            color: theme.accentColor

            SequentialAnimation on value {
                running: true
                loops: NumberAnimation.Infinite

                NumberAnimation {
                    duration: 3000
                    from: 0
                    to: 1
                }

                PauseAnimation { duration: 1000 } // This puts a bit of time between the loop
            }
        }

        Label {
            text: "Indeterminate"
        }

        ProgressBar {
            Layout.fillWidth: true
            color: theme.accentColor
            indeterminate: true
        }

        Label {
            text: "Default"
        }

        ProgressCircle {
            Layout.alignment: Qt.AlignCenter
        }

        Label {
            text: "Custom Color"
        }

        ProgressCircle {
            Layout.alignment: Qt.AlignCenter
            color: "#E91E63"
        }

        Label {
            text: "Cyclic Colors"
        }

        ProgressCircle {
            id: cyclicColorProgress
            Layout.alignment: Qt.AlignCenter
            SequentialAnimation {
                running: true
                loops: Animation.Infinite

                ColorAnimation {
                    from: "red"
                    to: "blue"
                    target: cyclicColorProgress
                    properties: "color"
                    easing.type: Easing.InOutQuad
                    duration: 2400
                }

                ColorAnimation {
                    from: "blue"
                    to: "green"
                    target: cyclicColorProgress
                    properties: "color"
                    easing.type: Easing.InOutQuad
                    duration: 1560
                }

                ColorAnimation {
                    from: "green"
                    to: "#FFCC00"
                    target: cyclicColorProgress
                    properties: "color"
                    easing.type: Easing.InOutQuad
                    duration:  840
                }

                ColorAnimation {
                    from: "#FFCC00"
                    to: "red"
                    target: cyclicColorProgress
                    properties: "color"
                    easing.type: Easing.InOutQuad
                    duration:  1200
                }
            }
        }

        Label {
            text: "Custom Size"
        }

        ProgressCircle {
            Layout.alignment: Qt.AlignCenter
            width: Units.dp(64)
            height: Units.dp(64)
        }

        Label {
            text: "Custom Size + Thickness"
        }

        ProgressCircle {
            Layout.alignment: Qt.AlignCenter
            width: Units.dp(64)
            height: Units.dp(64)
            dashThickness: Units.dp(8)
        }

        Label {
            text: "Determinate Value"
        }

        ProgressCircle {
            id: determinateProgress
            Layout.alignment: Qt.AlignCenter
            width: Units.dp(64)
            height: Units.dp(64)
            indeterminate: false
            minimumValue: 0
            maximumValue: 100

            SequentialAnimation on value {
                running: true
                loops: NumberAnimation.Infinite

                NumberAnimation {
                    duration: 3000
                    from: determinateProgress.minimumValue
                    to: determinateProgress.maximumValue
                }

                PauseAnimation { duration: 1000 }
            }

            Label {
                anchors.centerIn: parent
                text: Math.round(determinateProgress.value) + "%"
            }
        }
    }
}
