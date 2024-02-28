// Generated by commsdsl2tools_qt v6.3.0

#include "EsfMeas.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/EsfMeas.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_timeTag(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TimeTag;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct FlagsMembers
{
    static QVariantMap createProps_timeMarkSent(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::TimeMarkSent;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("None", 0)
                .add("Ext0", 1)
                .add("Ext1", 2)
                .asMap();
    }

    static QVariantMap createProps_bits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Bits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "timeMarkEdge")
                .add(1U, "calibTtagValid")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_timeMarkSent(true))
            .add(FlagsMembers::createProps_bits(true))
            .asMap();
}

static QVariantMap createProps_id(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Id;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_dataField(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::DataField;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_dataType(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::DataType;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .hidden()
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_dataField(true))
                .add(ElementMembers::createProps_dataType(true))
                .add(ElementMembers::createProps_reserved(true))
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

struct CalibTtagMembers
{
    static QVariantMap createProps_calibTtag(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CalibTtagMembers::CalibTtag;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct CalibTtagMembers

static QVariantMap createProps_calibTtag(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfMeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CalibTtag;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(CalibTtagMembers::createProps_calibTtag(serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_timeTag(false));
    props.append(createProps_flags(false));
    props.append(createProps_id(false));
    props.append(createProps_list(false));
    props.append(createProps_calibTtag(false));
    return props;
}

} // namespace

class EsfMeasImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::EsfMeas<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        EsfMeasImpl
    >
{
public:
    EsfMeasImpl() = default;
    EsfMeasImpl(const EsfMeasImpl&) = delete;
    EsfMeasImpl(EsfMeasImpl&&) = delete;
    virtual ~EsfMeasImpl() = default;
    EsfMeasImpl& operator=(const EsfMeasImpl&) = default;
    EsfMeasImpl& operator=(EsfMeasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfMeas::EsfMeas() : m_pImpl(new EsfMeasImpl) {}
EsfMeas::~EsfMeas() = default;

EsfMeas& EsfMeas::operator=(const EsfMeas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfMeas& EsfMeas::operator=(EsfMeas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

EsfMeas::MsgIdParamType EsfMeas::doGetId()
{
    return ::cc_ublox::message::EsfMeas<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* EsfMeas::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfMeas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfMeas::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfMeas::resetImpl()
{
    m_pImpl->reset();
}

bool EsfMeas::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfMeas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfMeas::MsgIdParamType EsfMeas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfMeas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfMeas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfMeas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfMeas::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfMeas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
