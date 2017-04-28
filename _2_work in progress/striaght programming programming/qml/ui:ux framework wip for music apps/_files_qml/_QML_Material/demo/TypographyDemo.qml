import QtQuick 2.4
import QtQuick.Layouts 1.1
import "./../modules/Material/"
import "./../modules/Material/Extras/"
import "./../modules/Material/fonts"
import "./../modules/Material/icons/"
import "./../modules/Material/ListItems" as ListItem
import "./../modules/QtQuick/Controls/Styles/Material"

Item {

    implicitHeight: column.height
    anchors.fill: parent


    property var styles: [
        "display4",
        "display3",
        "display2",
        "display1",
        "headline",
        "title",
        "subheading",
        "body2",
        "body1",
        "caption",
        "button"
    ]

    ColumnLayout {
        id: column
        spacing: Units.dp(16)

        ListItem.Subheader {
            text: "Font Weights"
        }

        Label {
            font.family: "Roboto"
            font.weight: Font.Light
            text: "Roboto Light"
            font.pixelSize: Units.dp(34)

            anchors {
                left: parent.left
                margins: Units.dp(16)
            }
        }

        Label {
            font.family: "Roboto"
            text: "Roboto Regular"
            font.pixelSize: Units.dp(34)

            anchors {
                left: parent.left
                margins: Units.dp(16)
            }
        }

        Label {
            font.family: "Roboto"
            font.weight: Font.DemiBold
            text: "Roboto Medium"
            font.pixelSize: Units.dp(34)

            anchors {
                left: parent.left
                margins: Units.dp(16)
            }
        }

        Label {
            font.family: "Roboto"
            font.weight: Font.Bold
            text: "Roboto Bold"
            font.pixelSize: Units.dp(34)

            anchors {
                left: parent.left
                margins: Units.dp(16)
            }
        }

        ListItem.Subheader {
            text: "Label Styles"
        }

        Repeater {
            model: styles
            delegate: Row {
                anchors {
                    left: parent.left
                    margins: Units.dp(16)
                }

                Label {
                    text: modelData
                    width: Units.dp(100)
                }

                Label {
                    style: modelData
                    text: {
                        var text = fontInfo["font"].substring(0,1).toUpperCase() + fontInfo["font"].substring(1)

                        if (style == "button")
                            text += " (ALL CAPS)"

                        text += " " + fontInfo["size"] + "sp"

                        if (fontInfo.size_desktop) {
                            text += " (Device), " + fontInfo["font"].substring(0,1).toUpperCase() + fontInfo["font"].substring(1)

                            if (style == "button")
                                text += " (ALL CAPS)"

                            text += " " + fontInfo["size_desktop"] + "sp (Desktop)"
                        }

                        return text
                    }
                }
            }
        }
    }
}
