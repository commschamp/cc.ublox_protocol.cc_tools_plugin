// Generated by commsdsl2tools_qt v6.3.4

#include "MonIo.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonIo.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_rxBytes(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::RxBytes;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_txBytes(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TxBytes;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_parityErrs(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::ParityErrs;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_framingErrs(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FramingErrs;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_overrunErrs(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::OverrunErrs;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_breakCond(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::BreakCond;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_rxBusy(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::RxBusy;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_txBusy(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TxBusy;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved1;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
            return props;
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_rxBytes(serHidden))
                .add(ElementMembers::createProps_txBytes(serHidden))
                .add(ElementMembers::createProps_parityErrs(serHidden))
                .add(ElementMembers::createProps_framingErrs(serHidden))
                .add(ElementMembers::createProps_overrunErrs(serHidden))
                .add(ElementMembers::createProps_breakCond(serHidden))
                .add(ElementMembers::createProps_rxBusy(serHidden))
                .add(ElementMembers::createProps_txBusy(serHidden))
                .add(ElementMembers::createProps_reserved1(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonIoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
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
    props.append(createProps_list(false));
    return props;
}

} // namespace

class MonIoImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonIo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonIoImpl
    >
{
public:
    MonIoImpl() = default;
    MonIoImpl(const MonIoImpl&) = delete;
    MonIoImpl(MonIoImpl&&) = delete;
    virtual ~MonIoImpl() = default;
    MonIoImpl& operator=(const MonIoImpl&) = default;
    MonIoImpl& operator=(MonIoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonIo::MonIo() : m_pImpl(new MonIoImpl) {}
MonIo::~MonIo() = default;

MonIo& MonIo::operator=(const MonIo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonIo& MonIo::operator=(MonIo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonIo::MsgIdParamType MonIo::doGetId()
{
    return ::cc_ublox::message::MonIo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonIo::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonIo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonIo::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonIo::resetImpl()
{
    m_pImpl->reset();
}

bool MonIo::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonIo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonIo::MsgIdParamType MonIo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonIo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonIo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonIo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonIo::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonIo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
