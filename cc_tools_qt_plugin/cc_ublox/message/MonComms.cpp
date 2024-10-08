// Generated by commsdsl2tools_qt v6.3.4

#include "MonComms.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res8.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonComms.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_nPorts(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NPorts;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_txErrors(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TxErrors;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "mem")
            .add(1U, "alloc")
            .asMap();
}

static QVariantMap createProps_reserved0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved0;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

struct ProtIdsMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ProtIdsMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("UBX", 0)
                .add("NMEA", 1)
                .add("RTCM2", 2)
                .add("RTCM3", 5)
                .add("None", 255)
                .asMap();
    }
}; // struct ProtIdsMembers

static QVariantMap createProps_protIds(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ProtIds;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ProtIdsMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_portId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PortId;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_txPending(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TxPending;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_txBytes(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TxBytes;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_txUsage(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TxUsage;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_txPeakUsage(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TxPeakUsage;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_rxPending(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::RxPending;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_rxBytes(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::RxBytes;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_rxUsage(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::RxUsage;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_rxPeakUsage(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::RxPeakUsage;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_overrunErrs(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::OverrunErrs;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        struct MsgsMembers
        {
            static QVariantMap createProps_element(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MsgsMembers::Element;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }
        }; // struct MsgsMembers

        static QVariantMap createProps_msgs(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Msgs;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .serialisedHidden()
                    .add(MsgsMembers::createProps_element(serHidden))
                    .appendIndexToElementName()
                    .asMap();
        }

        static QVariantMap createProps_reserved1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved1;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res8(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_skipped(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Skipped;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_portId(serHidden))
                .add(ElementMembers::createProps_txPending(serHidden))
                .add(ElementMembers::createProps_txBytes(serHidden))
                .add(ElementMembers::createProps_txUsage(serHidden))
                .add(ElementMembers::createProps_txPeakUsage(serHidden))
                .add(ElementMembers::createProps_rxPending(serHidden))
                .add(ElementMembers::createProps_rxBytes(serHidden))
                .add(ElementMembers::createProps_rxUsage(serHidden))
                .add(ElementMembers::createProps_rxPeakUsage(serHidden))
                .add(ElementMembers::createProps_overrunErrs(serHidden))
                .add(ElementMembers::createProps_msgs(serHidden))
                .add(ElementMembers::createProps_reserved1(serHidden))
                .add(ElementMembers::createProps_skipped(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonCommsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
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
    props.append(createProps_version(false));
    props.append(createProps_nPorts(false));
    props.append(createProps_txErrors(false));
    props.append(createProps_reserved0(false));
    props.append(createProps_protIds(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class MonCommsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonComms<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonCommsImpl
    >
{
public:
    MonCommsImpl() = default;
    MonCommsImpl(const MonCommsImpl&) = delete;
    MonCommsImpl(MonCommsImpl&&) = delete;
    virtual ~MonCommsImpl() = default;
    MonCommsImpl& operator=(const MonCommsImpl&) = default;
    MonCommsImpl& operator=(MonCommsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonComms::MonComms() : m_pImpl(new MonCommsImpl) {}
MonComms::~MonComms() = default;

MonComms& MonComms::operator=(const MonComms& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonComms& MonComms::operator=(MonComms&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonComms::MsgIdParamType MonComms::doGetId()
{
    return ::cc_ublox::message::MonComms<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonComms::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonComms::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonComms::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonComms::resetImpl()
{
    m_pImpl->reset();
}

bool MonComms::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonComms*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonComms::MsgIdParamType MonComms::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonComms::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonComms::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonComms::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonComms::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonComms::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
