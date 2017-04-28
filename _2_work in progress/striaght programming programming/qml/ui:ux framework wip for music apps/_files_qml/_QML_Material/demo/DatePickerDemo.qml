import QtQuick 2.4
import QtQuick.Layouts 1.1
import "./../modules/Material/"
import "./../modules/Material/Extras/"
import "./../modules/Material/fonts"
import "./../modules/Material/icons/"
import "./../modules/Material/ListItems" as ListItem
import "./../modules/QtQuick/Controls/Styles/Material"

ColumnLayout {
    anchors.fill: parent

    Dialog {
        id: datePickerDialog
        hasActions: true
        contentMargins: 0
        floatingActions: true

        DatePicker {
            frameVisible: false
            dayAreaBottomMargin : Units.dp(48)
        }

    }

    Dialog {
        id: landscapeDatePickerDialog
        hasActions: true
        contentMargins: 0
        floatingActions: true

        DatePicker {
            frameVisible: false
            dayAreaBottomMargin : Units.dp(48)
            isLandscape: true
        }

    }

    ColumnLayout {
        anchors.centerIn: parent
        spacing: Units.dp(16)

        Button {
            Layout.alignment: Qt.AlignCenter
            text: "Show DatePicker Dialog"
            elevation: 1
            onClicked: {
                datePickerDialog.show()
            }
        }

        Button {
            Layout.alignment: Qt.AlignCenter
            text: "Show Landscape DatePicker Dialog"
            elevation: 1
            onClicked: {
                landscapeDatePickerDialog.show()
            }
        }

        DatePicker {
            Layout.alignment: Qt.AlignCenter
        }

        DatePicker {
            Layout.alignment: Qt.AlignCenter
            isLandscape: true
        }
    }
}
