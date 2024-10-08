// Generated by commsdsl2tools_qt v6.3.4

#include "RxmImes.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/RxmImes.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_numTx(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumTx;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_reserved2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved2;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_txId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TxId;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved3(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved3;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_cno(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Cno;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved4(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved4;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_doppler(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Doppler;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(9U)
                    .asMap();
        }

        struct Position1_1Members
        {
            static QVariantMap createProps_pos1Floor(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position1_1Members::Pos1Floor;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_pos1Lat(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position1_1Members::Pos1Lat;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_reserved(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position1_1Members::Reserved;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .hidden()
                        .asMap();
            }
        }; // struct Position1_1Members

        static QVariantMap createProps_position1_1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position1_1;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(Position1_1Members::createProps_pos1Floor(true))
                    .add(Position1_1Members::createProps_pos1Lat(true))
                    .add(Position1_1Members::createProps_reserved(true))
                    .asMap();
        }

        struct Position1_2Members
        {
            static QVariantMap createProps_pos1Lon(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position1_2Members::Pos1Lon;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_flags(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position1_2Members::Flags;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "pos1Valid")
                        .asMap();
            }
        }; // struct Position1_2Members

        static QVariantMap createProps_position1_2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position1_2;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(Position1_2Members::createProps_pos1Lon(true))
                    .add(Position1_2Members::createProps_flags(true))
                    .asMap();
        }

        struct Position2_1Members
        {
            static QVariantMap createProps_pos2Floor(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position2_1Members::Pos2Floor;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_pos2Alt(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position2_1Members::Pos2Alt;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_pos2Acc(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position2_1Members::Pos2Acc;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add("Undef", 0)
                        .add("<7m", 1)
                        .add("<15m", 2)
                        .add(">15m", 3)
                        .asMap();
            }

            static QVariantMap createProps_bits(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position2_1Members::Bits;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "pos2Valid")
                        .asMap();
            }
        }; // struct Position2_1Members

        static QVariantMap createProps_position2_1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Position2_1;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(Position2_1Members::createProps_pos2Floor(true))
                    .add(Position2_1Members::createProps_pos2Alt(true))
                    .add(Position2_1Members::createProps_pos2Acc(true))
                    .add(Position2_1Members::createProps_bits(true))
                    .asMap();
        }

        static QVariantMap createProps_lat(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Lat;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_lon(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Lon;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        struct ShortIdFrameMembers
        {
            static QVariantMap createProps_shortId(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::ShortIdFrameMembers::ShortId;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_bits(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::ShortIdFrameMembers::Bits;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "shortValid")
                        .add(1U, "shortBoundary")
                        .asMap();
            }
        }; // struct ShortIdFrameMembers

        static QVariantMap createProps_shortIdFrame(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::ShortIdFrame;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(ShortIdFrameMembers::createProps_shortId(true))
                    .add(ShortIdFrameMembers::createProps_bits(true))
                    .asMap();
        }

        static QVariantMap createProps_mediumIdLSB(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MediumIdLSB;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_mediumId_2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MediumId_2;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(0U, "mediumIdMSB")
                    .add(1U, "mediumValid")
                    .add(2U, "mediumboundary")
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_reserved2(serHidden))
                .add(ElementMembers::createProps_txId(serHidden))
                .add(ElementMembers::createProps_reserved3(serHidden))
                .add(ElementMembers::createProps_cno(serHidden))
                .add(ElementMembers::createProps_reserved4(serHidden))
                .add(ElementMembers::createProps_doppler(serHidden))
                .add(ElementMembers::createProps_position1_1(serHidden))
                .add(ElementMembers::createProps_position1_2(serHidden))
                .add(ElementMembers::createProps_position2_1(serHidden))
                .add(ElementMembers::createProps_lat(serHidden))
                .add(ElementMembers::createProps_lon(serHidden))
                .add(ElementMembers::createProps_shortIdFrame(serHidden))
                .add(ElementMembers::createProps_mediumIdLSB(serHidden))
                .add(ElementMembers::createProps_mediumId_2(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmImesFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_numTx(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class RxmImesImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::RxmImes<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        RxmImesImpl
    >
{
public:
    RxmImesImpl() = default;
    RxmImesImpl(const RxmImesImpl&) = delete;
    RxmImesImpl(RxmImesImpl&&) = delete;
    virtual ~RxmImesImpl() = default;
    RxmImesImpl& operator=(const RxmImesImpl&) = default;
    RxmImesImpl& operator=(RxmImesImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmImes::RxmImes() : m_pImpl(new RxmImesImpl) {}
RxmImes::~RxmImes() = default;

RxmImes& RxmImes::operator=(const RxmImes& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmImes& RxmImes::operator=(RxmImes&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

RxmImes::MsgIdParamType RxmImes::doGetId()
{
    return ::cc_ublox::message::RxmImes<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* RxmImes::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmImes::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmImes::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmImes::resetImpl()
{
    m_pImpl->reset();
}

bool RxmImes::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmImes*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmImes::MsgIdParamType RxmImes::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmImes::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmImes::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmImes::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmImes::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmImes::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
